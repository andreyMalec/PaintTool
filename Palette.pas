unit Palette;

interface

uses System, System.Drawing, System.Windows.Forms,
 System.Windows.Input, System.Threading, System.Drawing.Drawing2D,
 System.IO, GlobalVar;

var
  bmp: Bitmap;
  g: Graphics;
  PaletteType:=0;
  MDown:boolean;
  rect:Rectangle;
  MLastCoord:Point;

type
  Palett = class(Form)
    procedure Palette_Load(sender: Object; e: EventArgs);
    procedure Palett_FormClosed(sender: Object; e: FormClosedEventArgs);
    procedure comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure pictureBox1_MouseMove(sender: Object; e: MouseEventArgs);
    procedure pictureBox1_MouseDown(sender: Object; e: MouseEventArgs);
    procedure pictureBox1_MouseUp(sender: Object; e: MouseEventArgs);
    procedure timer1_Tick(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Palette.Palett.resources}
    comboBox1: ComboBox;
    pictureBox2: PictureBox;
    timer1: Timer;
    components: System.ComponentModel.IContainer;
    button1: Button;
    pictureBox1: PictureBox;
    {$include Palette.Palett.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Palett.Palette_Load(sender: Object; e: EventArgs);
begin
  bmp := new Bitmap(pictureBox1.Width, pictureBox1.Height);
  
  g := Graphics.FromImage(bmp);
  g.SmoothingMode := SmoothingMode.HighQuality;
  g.InterpolationMode := InterpolationMode.HighQualityBicubic;
  
  rect:= new Rectangle(0,0,PictureBox1.Width,PictureBox1.Height);
  
  PictureBox2.BackColor:=FColor;
  
  timer1.Enabled:=true;
end;

procedure Palett.Palett_FormClosed(sender: Object; e: FormClosedEventArgs);
begin
  Palitra := false;
end;

procedure Palett.comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  if ComboBox1.Text = 'Градации серого' then
    PaletteType:=0;
end;

procedure Palett.pictureBox1_MouseMove(sender: Object; e: MouseEventArgs);
begin
  try
    if MDown then begin
      PictureBox2.BackColor:=bmp.GetPixel(e.x,e.y);
      MLastCoord:= new Point(e.x,e.y);
    end;
  except end;
end;

procedure Palett.pictureBox1_MouseDown(sender: Object; e: MouseEventArgs);
begin
  MDown:=true;
end;

procedure Palett.pictureBox1_MouseUp(sender: Object; e: MouseEventArgs);
begin
  MDown:=false;
  MLastCoord:= new Point(e.x,e.y);
end;

procedure Palett.timer1_Tick(sender: Object; e: EventArgs);
begin
  if PaletteType = 0 then
  begin
    var br:= new LinearGradientBrush(
      rect,
      Color.FromArgb(255, 0, 0, 0),
      Color.FromArgb(255, 255, 255, 255),
      LinearGradientMode.Horizontal);      
    g.FillRectangle(br,rect);
  end;
  
  PictureBox1.Image := bmp;
  var ElPen:= new Pen(Color.FromArgb(200,0,0,0));
  g.DrawEllipse(ElPen,MLastCoord.x-7,MLastCoord.y-7,14,14);
  ElPen:= new Pen(Color.FromArgb(200,255,255,255));
  g.DrawEllipse(ElPen,MLastCoord.x-8,MLastCoord.y-8,16,16);
end;

procedure Palett.button1_Click(sender: Object; e: EventArgs);
begin
  if not FS then
    FColor:=PictureBox2.BackColor else SColor:=PictureBox2.BackColor;
  self.Close;
end;

end.
