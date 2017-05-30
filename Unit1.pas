unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms,
 System.Windows.Input, System.Threading, System.Drawing.Drawing2D,
 System.IO;

type
    bool = boolean;

var
    SizeB := 1;
    retSizeB: single := 1;
    p: System.Drawing.Pen;
    g: Graphics;
    r: Rectangle;
    bmp: BitMap;
    RetBmp: List<BitMap>;
    x_coord, y_coord, x_coord1, y_coord1, x1, y1: integer;
    th: Thread;
    FColor, SColor, FSColor: Color;
    FS: bool;
    bType: string := 'brush';

type
    Form1 = class(Form)
        procedure toolStripMenuItem7_Click(sender: Object; e: EventArgs);
        procedure Spl_Click(sender: Object; e: EventArgs);
        procedure Smi_Click(sender: Object; e: EventArgs);
        procedure comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
        procedure comboBox1_TextUpdate(sender: Object; e: EventArgs);
        procedure Form1_Load(sender: Object; e: EventArgs);
        procedure pictureBox1_MouseMove(sender: Object; e: MouseEventArgs);
        procedure Form1_SizeChanged(sender: Object; e: EventArgs);
        procedure toolStripMenuItem12_Click(sender: Object; e: EventArgs);
        procedure pictureBox1_MouseDown(sender: Object; e: MouseEventArgs);
        procedure button1_Click(sender: Object; e: EventArgs);
        procedure timer1_Tick(sender: Object; e: EventArgs);
        procedure checkBox1_CheckedChanged(sender: Object; e: EventArgs);
        procedure pictureBox1_MouseUp(sender: Object; e: MouseEventArgs);
        procedure button2_Click(sender: Object; e: EventArgs);
        procedure toolStripMenuItem13_Click(sender: Object; e: EventArgs);
        procedure Layers_SelectedIndexChanged(sender: Object; e: EventArgs);
        procedure button3_Click(sender: Object; e: EventArgs);
        procedure button4_Click(sender: Object; e: EventArgs);
        procedure toolStripMenuItem9_Click(sender: Object; e: EventArgs);
        procedure toolStripMenuItem15_Click(sender: Object; e: EventArgs);
        procedure toolStripMenuItem5_Click(sender: Object; e: EventArgs);
        procedure toolStripMenuItem3_Click(sender: Object; e: EventArgs);
        procedure toolStripButton2_Click(sender: Object; e: EventArgs);
        procedure Bbrush_Click(sender: Object; e: EventArgs);
        procedure BPencil_Click(sender: Object; e: EventArgs);
        procedure Bfill_Click(sender: Object; e: EventArgs);
        procedure Bpipette_Click(sender: Object; e: EventArgs);
        procedure Beraser_Click(sender: Object; e: EventArgs);
        procedure pictureBox4_Click(sender: Object; e: EventArgs);
        procedure toolStripMenuItem4_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem6_Click(sender: Object; e: EventArgs);
    procedure toolStripButton3_Click(sender: Object; e: EventArgs);
    procedure toolStripButton4_Click(sender: Object; e: EventArgs);
    procedure toolStripButton5_Click(sender: Object; e: EventArgs);
    procedure menuStrip1_ItemClicked(sender: Object; e: ToolStripItemClickedEventArgs);
    {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    menuStrip1: MenuStrip;
    toolStripMenuItem1: ToolStripMenuItem;
    toolStripMenuItem3: ToolStripMenuItem;
    toolStripMenuItem4: ToolStripMenuItem;
    toolStripMenuItem5: ToolStripMenuItem;
    toolStripMenuItem6: ToolStripMenuItem;
    toolStripMenuItem7: ToolStripMenuItem;
    toolStripMenuItem2: ToolStripMenuItem;
    toolStripMenuItem8: ToolStripMenuItem;
    toolStripMenuItem12: ToolStripMenuItem;
    toolStripMenuItem13: ToolStripMenuItem;
    toolStripMenuItem10: ToolStripMenuItem;
    toolStripMenuItem15: ToolStripMenuItem;
    toolStripMenuItem16: ToolStripMenuItem;
    toolStrip1: ToolStrip;
    toolStripButton1: ToolStripButton;
    label1: &Label;
    comboBox1: ComboBox;
    Spl: Button;
    Smi: Button;
    components: System.ComponentModel.IContainer;
    pictureBox1: PictureBox;
    colorDialog1: ColorDialog;
    button1: Button;
    timer1: Timer;
    checkBox1: CheckBox;
    pictureBox2: PictureBox;
    pictureBox3: PictureBox;
    Layers: CheckedListBox;
    button3: Button;
    button4: Button;
    toolStripButton2: ToolStripButton;
    Bbrush: Button;
    BPencil: Button;
    Bfill: Button;
    Bpipette: Button;
    Beraser: Button;
    pictureBox4: PictureBox;
    saveFileDialog1: SaveFileDialog;
    openFileDialog1: OpenFileDialog;
    toolStripButton3: ToolStripButton;
    toolStripButton4: ToolStripButton;
    toolStripButton5: ToolStripButton;
    toolStripSeparator1: ToolStripSeparator;
    toolStripSeparator3: ToolStripSeparator;
    toolStripSeparator2: ToolStripSeparator;
    toolStripMenuItem9: ToolStripMenuItem;
    {$include Unit1.Form1.inc}
    {$endregion FormDesigner}
    public 
        constructor;
        begin
            InitializeComponent;
        end;
    end;

implementation

function Buttons(sender: Object; e: MouseEventArgs): integer;
type
    MouseButtons = System.Windows.Forms.MouseButtons;
begin
    if e.Button = MouseButtons.Left then
        Result := 1
    else if e.Button = MouseButtons.Right then
        Result := 2; 
end;

procedure Form1.toolStripMenuItem7_Click(sender: Object; e: EventArgs):=
Application.Exit;

procedure Form1.Spl_Click(sender: Object; e: EventArgs);
begin
    SizeB += 1;
    comboBox1.Text := SizeB.ToString;
    p := new Pen(Color.Black, SizeB);
end;

procedure Form1.Smi_Click(sender: Object; e: EventArgs):=
if (SizeB >= 2) then begin
    SizeB -= 1;
    comboBox1.Text := inttostr(SizeB);
    p := new Pen(Color.Black, SizeB);
end;

procedure Form1.comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
    SizeB := strtoint(comboBox1.Text);
    p := new Pen(Color.Black, SizeB);
end;

procedure Form1.comboBox1_TextUpdate(sender: Object; e: EventArgs);
begin
    try
        SizeB := strtoint(comboBox1.Text);
    except
        on System.FormatException do begin
            messageBox.Show('Неверный формат ввода', 'Ошибка!', System.Windows.Forms.MessageBoxButtons.OK);
            comboBox1.Text := inttostr(SizeB);
        end;
    end;
end;

procedure Form1.Form1_SizeChanged(sender: Object; e: EventArgs);
var
    gr: Graphics;
    b: Bitmap;
begin
    if openFileDialog1.FileName = '' then begin
        b := new Bitmap(bmp);
        bmp := new Bitmap(pictureBox1.Width, pictureBox1.Height);
        gr := Graphics.FromImage(bmp);
        gr.DrawImage(b, 0, 0);
        gr.Dispose;
        g := Graphics.FromImage(bmp);
        g.SmoothingMode := SmoothingMode.HighQuality;
        g.InterpolationMode := InterpolationMode.HighQualityBicubic;
    end else begin
        b := new Bitmap(openFileDialog1.FileName);
        bmp := new Bitmap(pictureBox1.Width, pictureBox1.Height);
        gr := Graphics.FromImage(bmp);
        if (b.Height < pictureBox1.Height) and (b.Width < pictureBox1.Width) then
            gr.DrawImage(b, new Rectangle(0,0,b.Width,b.Height)) else
        if b.Width < pictureBox1.Width then
            gr.DrawImage(b, new Rectangle(0,0,b.Width,pictureBox1.Height)) else
        if b.Height < pictureBox1.Height then
            gr.DrawImage(b, new Rectangle(0,0,pictureBox1.Width,b.Height)) else        
        gr.DrawImage(b, new Rectangle(0,0,pictureBox1.Width,pictureBox1.Height));
        gr.Dispose;
        g := Graphics.FromImage(bmp);
        g.SmoothingMode := SmoothingMode.HighQuality;
        g.InterpolationMode := InterpolationMode.HighQualityBicubic;
    end;
end;

procedure Form1.toolStripMenuItem12_Click(sender: Object; e: EventArgs);
begin
    g.Dispose;
    bmp := new Bitmap(pictureBox1.Width, pictureBox1.Height);
    picturebox1.Refresh;
    g := Graphics.FromImage(bmp);
    if CheckBox1.Checked then g.SmoothingMode := SmoothingMode.HighQuality;
    g.InterpolationMode := InterpolationMode.HighQualityBicubic;
end;

procedure MoveTo(x, y: integer);
begin
    x_coord := x;
    y_coord := y;
    x_coord1 := x;
    y_coord1 := y;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
    ColorDialog1 := new ColorDialog;
    try
        ColorDialog1.FullOpen := true;
        ColorDialog1.ShowDialog;
        if not FS then 
            FColor := ColorDialog1.Color else
            SColor := ColorDialog1.Color;
        
        if not FS then begin
            pictureBox2.BackColor := FColor;
            pictureBox3.BackColor := SColor;
        end else begin
            pictureBox3.BackColor := FColor;
            pictureBox2.BackColor := SColor;
        end;
    except
  end;
end;

procedure Form1.timer1_Tick(sender: Object; e: EventArgs);
begin
    p.Color := PictureBox2.BackColor;
    pictureBox1.Image := bmp;
end;

procedure Form1.checkBox1_CheckedChanged(sender: Object; e: EventArgs);
begin
    if CheckBox1.Checked then begin
        g.SmoothingMode := SmoothingMode.HighQuality;
    end
    else begin
        g.SmoothingMode := SmoothingMode.None;
    end;
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
    
end;

procedure Form1.toolStripMenuItem13_Click(sender: Object; e: EventArgs);
begin
    FColor := Color.Black;
    SColor := Color.White;
    pictureBox2.BackColor := FColor;
    pictureBox3.BackColor := SColor;
    FS := false;
end;

procedure Form1.Layers_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
    if layers.GetItemChecked(0) then;
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
begin
    Layers.Items.Add('Слой ' + Layers.Items.Count);
end;

procedure Form1.button4_Click(sender: Object; e: EventArgs):=
if Layers.Items.Count > 1 then begin
    Layers.Items.RemoveAt(Layers.SelectedIndex);
    layers.SetSelected(Layers.SelectedIndex+1,true);
end;




procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
    RetBmp:= new List<Bitmap>;
    bmp := new Bitmap(pictureBox1.Width, pictureBox1.Height);
    p := new Pen(Color.Black, SizeB);
    g := Graphics.FromImage(bmp);
    g.SmoothingMode := SmoothingMode.HighQuality;
    g.InterpolationMode := InterpolationMode.HighQualityBicubic;
    //g.PixelOffsetMode:=PixelOffsetMode.HighQuality;
    
    r := new Rectangle(0, 0, 0, 0);
    FColor := Color.Black;
    SColor := Color.White;
    Layers.Items.Add('Фон', true);
    Layers.SelectedIndex := 0;
end;

procedure Form1.pictureBox1_MouseMove(sender: Object; e: MouseEventArgs):=
if e.Button = System.Windows.Forms.MouseButtons.Left then
begin
    case bType of
        'brush':
            begin
                g.DrawLine(p, x_coord, y_coord, e.x, e.y);
                x_coord := e.x;
                y_coord := e.y;  
                if x_coord1 >= e.x then x_coord1 := e.x;
                if y_coord1 >= e.y then y_coord1 := e.y;
                g.FillEllipse(p.brush, e.x - sizeb div 2, e.y - sizeb div 2, sizeb, sizeb);
            end;
        'pencil':
            begin
                p.Width := 1;
                g.DrawLine(p, x_coord, y_coord, e.x, e.y);
                x_coord := e.x;
                y_coord := e.y;  
                if x_coord1 >= e.x then x_coord1 := e.x;
                if y_coord1 >= e.y then y_coord1 := e.y;
            end;
        'eraser':   ;
    end;
end;

procedure Form1.pictureBox1_MouseDown(sender: Object; e: MouseEventArgs):=
if e.Button = System.Windows.Forms.MouseButtons.Left then begin
    
    if RetBmp.Count-1 > 50 then RetBmp.RemoveAt(0);
    RetBmp.Add(new Bitmap(pictureBox1.Image));
    
    MoveTo(e.X, e.Y);
    
    x_coord1 := e.x;
    y_coord1 := e.y;
    case bType of
    'brush':
            begin
                g.FillEllipse(p.brush, e.x - sizeb div 2, e.y - sizeb div 2, sizeb, sizeb);
            end;
        'pencil':
            begin
                p.Width := 1;
                g.DrawLine(p, x_coord, y_coord, e.x, e.y);
                x_coord := e.x;
                y_coord := e.y;  
                if x_coord1 >= e.x then x_coord1 := e.x;
                if y_coord1 >= e.y then y_coord1 := e.y;
            end;
        'pipette':
            begin
                var b := new Bitmap(pictureBox1.Image);
                FColor := b.GetPixel(e.X, e.Y);
                pictureBox2.BackColor := FColor;
            end;
    end;
end;

procedure Form1.pictureBox1_MouseUp(sender: Object; e: MouseEventArgs);
begin
end;

procedure Form1.toolStripMenuItem9_Click(sender: Object; e: EventArgs);
begin
    if RetBmp.Count-1 >= 0 then
    begin
      bmp := RetBmp[RetBmp.Count-1];
      RetBmp.RemoveAt(RetBmp.Count-1);
      pictureBox1.Image:=bmp;
      g := Graphics.FromImage(bmp);
      g.SmoothingMode := SmoothingMode.HighQuality;
      g.InterpolationMode := InterpolationMode.HighQualityBicubic;
      //g.PixelOffsetMode:=PixelOffsetMode.HighQuality;
    end;
end;

procedure Form1.toolStripMenuItem15_Click(sender: Object; e: EventArgs);
begin
    messageBox.Show('Как использовать Pain Tool?' + #10 + #10 + 'Интерфейс:' + #10 + '  Используя меню в верхнем левом углу, вы можете открыть/сохранить' +
      #10 + 'все виды и форматы изображений. Также вы можете изменить размер ' + 'полотна и очистить палитру и рабочую область' + #10 +
      '  В основном окне программы вы можете производить манипуляции с размером, цветом и типом кисти, а также сохранить выбранный цвет в палитру',
      'Документация - PaintTool');
end;

procedure Form1.toolStripMenuItem5_Click(sender: Object; e: EventArgs);
begin
if SaveFileDialog1.FileName <> '' then
    bmp.Save(SaveFileDialog1.FileName) else
      bmp.Save('NewImage.png', System.Drawing.Imaging.ImageFormat.Png);
end;

procedure Form1.toolStripMenuItem3_Click(sender: Object; e: EventArgs);
begin
    bmp:= new Bitmap(pictureBox1.Width,pictureBox1.Height);
    g:=Graphics.FromImage(bmp);
    g.SmoothingMode := SmoothingMode.HighQuality;
    g.InterpolationMode := InterpolationMode.HighQualityBicubic;
end;

procedure Form1.toolStripButton2_Click(sender: Object; e: EventArgs);
begin
    bmp:= new Bitmap(pictureBox1.Width,pictureBox1.Height);
    g:=Graphics.FromImage(bmp);
    g.SmoothingMode := SmoothingMode.HighQuality;
    g.InterpolationMode := InterpolationMode.HighQualityBicubic;
end;

procedure Form1.Bbrush_Click(sender: Object; e: EventArgs);
begin
    bType := 'brush';
    comboBox1.Enabled := true;
    comboBox1.Text := retSizeB + '';
    p.Width := retSizeB;
    label1.Visible := true;
    comboBox1.Visible := true;
    spl.Visible := true;
    smi.Visible := true;
    checkBox1.Location := new Point(209, checkBox1.Location.Y);
    checkBox1.Invalidate();
end;

procedure Form1.BPencil_Click(sender: Object; e: EventArgs);
begin
    retSizeB := p.Width;
    bType := 'pencil';
    label1.Visible := false;
    comboBox1.Visible := false;
    spl.Visible := false;
    smi.Visible := false;
    checkBox1.Location := new Point(3, checkBox1.Location.Y);
    checkBox1.Invalidate();
end;

procedure Form1.Bfill_Click(sender: Object; e: EventArgs);
begin
    bType := 'fill';
    label1.Visible := false;
    comboBox1.Visible := false;
    spl.Visible := false;
    smi.Visible := false;
    checkBox1.Location := new Point(3, checkBox1.Location.Y);
    checkBox1.Invalidate();
end;

procedure Form1.Bpipette_Click(sender: Object; e: EventArgs);
begin
    bType := 'pipette';
end;

procedure Form1.Beraser_Click(sender: Object; e: EventArgs);
begin
    bType := 'eraser';
end;

procedure Form1.pictureBox4_Click(sender: Object; e: EventArgs);
begin
    FS := not FS;
    if not FS then begin
        pictureBox2.BackColor := FColor;
        pictureBox3.BackColor := SColor;
    end else begin
        pictureBox3.BackColor := FColor;
        pictureBox2.BackColor := SColor;
    end;
end;

procedure Form1.toolStripMenuItem4_Click(sender: Object; e: EventArgs);
begin
    if OpenFileDialog1.ShowDialog = System.Windows.Forms.DialogResult.OK then
      if openFileDialog1.FileName <> '' then begin
       var b:=new Bitmap(openFileDialog1.FileName);
       bmp:=new Bitmap(pictureBox1.Width,pictureBox1.Height);
       g:=Graphics.FromImage(bmp);
       g.DrawImage(b,new Rectangle(0,0,pictureBox1.Width,pictureBox1.Height));
       end;
end;

procedure Form1.toolStripMenuItem6_Click(sender: Object; e: EventArgs);
begin
   if SaveFileDialog1.ShowDialog = System.Windows.Forms.DialogResult.OK then
      bmp.Save(SaveFileDialog1.FileName);
end;

procedure Form1.toolStripButton3_Click(sender: Object; e: EventArgs);
begin
  if OpenFileDialog1.ShowDialog = System.Windows.Forms.DialogResult.OK then
      if openFileDialog1.FileName <> '' then begin
       var b:=new Bitmap(openFileDialog1.FileName);
       bmp:=new Bitmap(pictureBox1.Width,pictureBox1.Height);
       g:=Graphics.FromImage(bmp);
       g.DrawImage(b,new Rectangle(0,0,pictureBox1.Width,pictureBox1.Height));
       end;
end;

procedure Form1.toolStripButton4_Click(sender: Object; e: EventArgs);
begin  
if SaveFileDialog1.FileName <> '' then
    bmp.Save(SaveFileDialog1.FileName) else
      bmp.Save('NewImage.png', System.Drawing.Imaging.ImageFormat.Png);
end;

procedure Form1.toolStripButton5_Click(sender: Object; e: EventArgs);
begin
   if SaveFileDialog1.ShowDialog = System.Windows.Forms.DialogResult.OK then
      bmp.Save(SaveFileDialog1.FileName);
end;

procedure Form1.menuStrip1_ItemClicked(sender: Object; e: ToolStripItemClickedEventArgs);
begin
  
end;




end.