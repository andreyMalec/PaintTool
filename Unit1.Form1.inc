procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem3 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem4 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator3 := new System.Windows.Forms.ToolStripSeparator();
        self.toolStripMenuItem5 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem6 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator2 := new System.Windows.Forms.ToolStripSeparator();
        self.toolStripMenuItem7 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem2 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem9 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem8 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem12 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem13 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem14 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem10 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem15 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem16 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStrip1 := new System.Windows.Forms.ToolStrip();
        self.toolStripButton1 := new System.Windows.Forms.ToolStripButton();
        self.toolStripButton2 := new System.Windows.Forms.ToolStripButton();
        self.toolStripButton3 := new System.Windows.Forms.ToolStripButton();
        self.toolStripButton4 := new System.Windows.Forms.ToolStripButton();
        self.toolStripButton5 := new System.Windows.Forms.ToolStripButton();
        self.toolStripSeparator1 := new System.Windows.Forms.ToolStripSeparator();
        self.label1 := new System.Windows.Forms.Label();
        self.comboBox1 := new System.Windows.Forms.ComboBox();
        self.Spl := new System.Windows.Forms.Button();
        self.Smi := new System.Windows.Forms.Button();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.colorDialog1 := new System.Windows.Forms.ColorDialog();
        self.button1 := new System.Windows.Forms.Button();
        self.timer1 := new System.Windows.Forms.Timer(self.components);
        self.checkBox1 := new System.Windows.Forms.CheckBox();
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        self.pictureBox3 := new System.Windows.Forms.PictureBox();
        self.Layers := new System.Windows.Forms.CheckedListBox();
        self.button3 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.Bbrush := new System.Windows.Forms.Button();
        self.BPencil := new System.Windows.Forms.Button();
        self.Bfill := new System.Windows.Forms.Button();
        self.Bpipette := new System.Windows.Forms.Button();
        self.Beraser := new System.Windows.Forms.Button();
        self.pictureBox4 := new System.Windows.Forms.PictureBox();
        self.saveFileDialog1 := new System.Windows.Forms.SaveFileDialog();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.menuStrip1.SuspendLayout();
        self.toolStrip1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox3)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox4)).BeginInit();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[4](self.toolStripMenuItem1, self.toolStripMenuItem2, self.toolStripMenuItem8, self.toolStripMenuItem10));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(1000, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[7](self.toolStripMenuItem3, self.toolStripMenuItem4, self.toolStripSeparator3, self.toolStripMenuItem5, self.toolStripMenuItem6, self.toolStripSeparator2, self.toolStripMenuItem7));
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(48, 20);
        self.toolStripMenuItem1.Text := 'Файл';
        // 
        // toolStripMenuItem3
        // 
        self.toolStripMenuItem3.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem3.Image')));
        self.toolStripMenuItem3.Name := 'toolStripMenuItem3';
        self.toolStripMenuItem3.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.N)));
        self.toolStripMenuItem3.Size := new System.Drawing.Size(234, 22);
        self.toolStripMenuItem3.Text := 'Новый';
        self.toolStripMenuItem3.Click += toolStripMenuItem3_Click;
        // 
        // toolStripMenuItem4
        // 
        self.toolStripMenuItem4.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem4.Image')));
        self.toolStripMenuItem4.Name := 'toolStripMenuItem4';
        self.toolStripMenuItem4.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.O)));
        self.toolStripMenuItem4.Size := new System.Drawing.Size(234, 22);
        self.toolStripMenuItem4.Text := 'Открыть...';
        self.toolStripMenuItem4.Click += toolStripMenuItem4_Click;
        // 
        // toolStripSeparator3
        // 
        self.toolStripSeparator3.Name := 'toolStripSeparator3';
        self.toolStripSeparator3.Size := new System.Drawing.Size(231, 6);
        // 
        // toolStripMenuItem5
        // 
        self.toolStripMenuItem5.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem5.Image')));
        self.toolStripMenuItem5.Name := 'toolStripMenuItem5';
        self.toolStripMenuItem5.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.S)));
        self.toolStripMenuItem5.Size := new System.Drawing.Size(234, 22);
        self.toolStripMenuItem5.Text := 'Сохранить';
        self.toolStripMenuItem5.Click += toolStripMenuItem5_Click;
        // 
        // toolStripMenuItem6
        // 
        self.toolStripMenuItem6.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem6.Image')));
        self.toolStripMenuItem6.Name := 'toolStripMenuItem6';
        self.toolStripMenuItem6.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.S)));
        self.toolStripMenuItem6.Size := new System.Drawing.Size(234, 22);
        self.toolStripMenuItem6.Text := 'Сохранить как...';
        self.toolStripMenuItem6.Click += toolStripMenuItem6_Click;
        // 
        // toolStripSeparator2
        // 
        self.toolStripSeparator2.Name := 'toolStripSeparator2';
        self.toolStripSeparator2.Size := new System.Drawing.Size(231, 6);
        // 
        // toolStripMenuItem7
        // 
        self.toolStripMenuItem7.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem7.Image')));
        self.toolStripMenuItem7.Name := 'toolStripMenuItem7';
        self.toolStripMenuItem7.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Q)));
        self.toolStripMenuItem7.Size := new System.Drawing.Size(234, 22);
        self.toolStripMenuItem7.Text := 'Выход';
        self.toolStripMenuItem7.Click += toolStripMenuItem7_Click;
        // 
        // toolStripMenuItem2
        // 
        self.toolStripMenuItem2.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem9));
        self.toolStripMenuItem2.Name := 'toolStripMenuItem2';
        self.toolStripMenuItem2.Size := new System.Drawing.Size(59, 20);
        self.toolStripMenuItem2.Text := 'Правка';
        // 
        // toolStripMenuItem9
        // 
        self.toolStripMenuItem9.Name := 'toolStripMenuItem9';
        self.toolStripMenuItem9.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Z)));
        self.toolStripMenuItem9.Size := new System.Drawing.Size(169, 22);
        self.toolStripMenuItem9.Text := 'Отменить';
        self.toolStripMenuItem9.Click += toolStripMenuItem9_Click;
        // 
        // toolStripMenuItem8
        // 
        self.toolStripMenuItem8.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[3](self.toolStripMenuItem12, self.toolStripMenuItem13, self.toolStripMenuItem14));
        self.toolStripMenuItem8.Name := 'toolStripMenuItem8';
        self.toolStripMenuItem8.Size := new System.Drawing.Size(95, 20);
        self.toolStripMenuItem8.Text := 'Изображение';
        // 
        // toolStripMenuItem12
        // 
        self.toolStripMenuItem12.Name := 'toolStripMenuItem12';
        self.toolStripMenuItem12.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.E)));
        self.toolStripMenuItem12.Size := new System.Drawing.Size(210, 22);
        self.toolStripMenuItem12.Text := 'Очистить';
        self.toolStripMenuItem12.Click += toolStripMenuItem12_Click;
        // 
        // toolStripMenuItem13
        // 
        self.toolStripMenuItem13.Name := 'toolStripMenuItem13';
        self.toolStripMenuItem13.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Alt or System.Windows.Forms.Keys.E)));
        self.toolStripMenuItem13.Size := new System.Drawing.Size(210, 22);
        self.toolStripMenuItem13.Text := 'Очистить палитру';
        self.toolStripMenuItem13.Click += toolStripMenuItem13_Click;
        // 
        // toolStripMenuItem14
        // 
        self.toolStripMenuItem14.Name := 'toolStripMenuItem14';
        self.toolStripMenuItem14.Size := new System.Drawing.Size(210, 22);
        self.toolStripMenuItem14.Text := 'Изменить размер';
        self.toolStripMenuItem14.Click += toolStripMenuItem14_Click;
        // 
        // toolStripMenuItem10
        // 
        self.toolStripMenuItem10.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem15, self.toolStripMenuItem16));
        self.toolStripMenuItem10.Name := 'toolStripMenuItem10';
        self.toolStripMenuItem10.Size := new System.Drawing.Size(68, 20);
        self.toolStripMenuItem10.Text := 'Помощь';
        // 
        // toolStripMenuItem15
        // 
        self.toolStripMenuItem15.Name := 'toolStripMenuItem15';
        self.toolStripMenuItem15.ShortcutKeys := System.Windows.Forms.Keys.F1;
        self.toolStripMenuItem15.Size := new System.Drawing.Size(174, 22);
        self.toolStripMenuItem15.Text := 'Документация';
        self.toolStripMenuItem15.Click += toolStripMenuItem15_Click;
        // 
        // toolStripMenuItem16
        // 
        self.toolStripMenuItem16.Name := 'toolStripMenuItem16';
        self.toolStripMenuItem16.ShortcutKeys := System.Windows.Forms.Keys.F12;
        self.toolStripMenuItem16.Size := new System.Drawing.Size(174, 22);
        self.toolStripMenuItem16.Text := 'О программе';
        self.toolStripMenuItem16.Click += toolStripMenuItem16_Click;
        // 
        // toolStrip1
        // 
        self.toolStrip1.Dock := System.Windows.Forms.DockStyle.None;
        self.toolStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[6](self.toolStripButton1, self.toolStripButton2, self.toolStripButton3, self.toolStripButton4, self.toolStripButton5, self.toolStripSeparator1));
        self.toolStrip1.Location := new System.Drawing.Point(-31, 24);
        self.toolStrip1.Name := 'toolStrip1';
        self.toolStrip1.Size := new System.Drawing.Size(133, 25);
        self.toolStrip1.TabIndex := 1;
        self.toolStrip1.Text := 'toolStrip1';
        // 
        // toolStripButton1
        // 
        self.toolStripButton1.DisplayStyle := System.Windows.Forms.ToolStripItemDisplayStyle.Image;
        self.toolStripButton1.Image := (System.Drawing.Image(resources.GetObject('toolStripButton1.Image')));
        self.toolStripButton1.ImageTransparentColor := System.Drawing.Color.Magenta;
        self.toolStripButton1.Name := 'toolStripButton1';
        self.toolStripButton1.Size := new System.Drawing.Size(23, 22);
        self.toolStripButton1.Text := 'Новый';
        // 
        // toolStripButton2
        // 
        self.toolStripButton2.DisplayStyle := System.Windows.Forms.ToolStripItemDisplayStyle.Image;
        self.toolStripButton2.Image := (System.Drawing.Image(resources.GetObject('toolStripButton2.Image')));
        self.toolStripButton2.ImageTransparentColor := System.Drawing.Color.Magenta;
        self.toolStripButton2.Name := 'toolStripButton2';
        self.toolStripButton2.Size := new System.Drawing.Size(23, 22);
        self.toolStripButton2.Text := 'Новый файл';
        self.toolStripButton2.Click += toolStripButton2_Click;
        // 
        // toolStripButton3
        // 
        self.toolStripButton3.DisplayStyle := System.Windows.Forms.ToolStripItemDisplayStyle.Image;
        self.toolStripButton3.Image := (System.Drawing.Image(resources.GetObject('toolStripButton3.Image')));
        self.toolStripButton3.ImageTransparentColor := System.Drawing.Color.Magenta;
        self.toolStripButton3.Name := 'toolStripButton3';
        self.toolStripButton3.Size := new System.Drawing.Size(23, 22);
        self.toolStripButton3.Text := 'Открыть...';
        self.toolStripButton3.Click += toolStripButton3_Click;
        // 
        // toolStripButton4
        // 
        self.toolStripButton4.DisplayStyle := System.Windows.Forms.ToolStripItemDisplayStyle.Image;
        self.toolStripButton4.Image := (System.Drawing.Image(resources.GetObject('toolStripButton4.Image')));
        self.toolStripButton4.ImageTransparentColor := System.Drawing.Color.Magenta;
        self.toolStripButton4.Name := 'toolStripButton4';
        self.toolStripButton4.Size := new System.Drawing.Size(23, 22);
        self.toolStripButton4.Text := 'Сохранить';
        self.toolStripButton4.Click += toolStripButton4_Click;
        // 
        // toolStripButton5
        // 
        self.toolStripButton5.DisplayStyle := System.Windows.Forms.ToolStripItemDisplayStyle.Image;
        self.toolStripButton5.Image := (System.Drawing.Image(resources.GetObject('toolStripButton5.Image')));
        self.toolStripButton5.ImageTransparentColor := System.Drawing.Color.Magenta;
        self.toolStripButton5.Name := 'toolStripButton5';
        self.toolStripButton5.Size := new System.Drawing.Size(23, 22);
        self.toolStripButton5.Text := 'Сохранить как...';
        self.toolStripButton5.Click += toolStripButton5_Click;
        // 
        // toolStripSeparator1
        // 
        self.toolStripSeparator1.Name := 'toolStripSeparator1';
        self.toolStripSeparator1.Size := new System.Drawing.Size(6, 25);
        // 
        // label1
        // 
        self.label1.AutoSize := true;
        self.label1.BackColor := System.Drawing.Color.Transparent;
        self.label1.Location := new System.Drawing.Point(0, 49);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(78, 13);
        self.label1.TabIndex := 2;
        self.label1.Text := 'Ширина кисти';
        // 
        // comboBox1
        // 
        self.comboBox1.FormattingEnabled := true;
        self.comboBox1.Items.AddRange(new System.Object[32]('1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15', '20', '25', '30', '35', '40', '45', '50', '55', '60', '65', '70', '75', '80', '85', '90', '95', '100'));
        self.comboBox1.Location := new System.Drawing.Point(84, 46);
        self.comboBox1.Name := 'comboBox1';
        self.comboBox1.Size := new System.Drawing.Size(59, 21);
        self.comboBox1.TabIndex := 3;
        self.comboBox1.Text := '1';
        self.comboBox1.SelectedIndexChanged += comboBox1_SelectedIndexChanged;
        self.comboBox1.TextUpdate += comboBox1_TextUpdate;
        // 
        // Spl
        // 
        self.Spl.Location := new System.Drawing.Point(149, 44);
        self.Spl.Name := 'Spl';
        self.Spl.Size := new System.Drawing.Size(24, 23);
        self.Spl.TabIndex := 4;
        self.Spl.Text := '+';
        self.Spl.UseVisualStyleBackColor := true;
        self.Spl.Click += Spl_Click;
        // 
        // Smi
        // 
        self.Smi.Location := new System.Drawing.Point(179, 44);
        self.Smi.Name := 'Smi';
        self.Smi.Size := new System.Drawing.Size(24, 23);
        self.Smi.TabIndex := 5;
        self.Smi.Text := '-';
        self.Smi.UseVisualStyleBackColor := true;
        self.Smi.Click += Smi_Click;
        // 
        // pictureBox1
        // 
        self.pictureBox1.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.pictureBox1.BackColor := System.Drawing.Color.White;
        self.pictureBox1.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        self.pictureBox1.Cursor := System.Windows.Forms.Cursors.Cross;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(42, 69);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(819, 592);
        self.pictureBox1.TabIndex := 6;
        self.pictureBox1.TabStop := false;
        self.pictureBox1.MouseDown += pictureBox1_MouseDown;
        self.pictureBox1.MouseMove += pictureBox1_MouseMove;
        self.pictureBox1.MouseUp += pictureBox1_MouseUp;
        // 
        // colorDialog1
        // 
        self.colorDialog1.AnyColor := true;
        // 
        // button1
        // 
        self.button1.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Right)));
        self.button1.Location := new System.Drawing.Point(867, 67);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(121, 28);
        self.button1.TabIndex := 7;
        self.button1.Text := 'Палитра';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // timer1
        // 
        self.timer1.Enabled := true;
        self.timer1.Interval := 10;
        self.timer1.Tick += timer1_Tick;
        // 
        // checkBox1
        // 
        self.checkBox1.BackColor := System.Drawing.Color.Transparent;
        self.checkBox1.Checked := true;
        self.checkBox1.CheckState := System.Windows.Forms.CheckState.Checked;
        self.checkBox1.Location := new System.Drawing.Point(209, 44);
        self.checkBox1.Name := 'checkBox1';
        self.checkBox1.Size := new System.Drawing.Size(104, 24);
        self.checkBox1.TabIndex := 8;
        self.checkBox1.Text := 'Сглаживание';
        self.checkBox1.UseVisualStyleBackColor := false;
        self.checkBox1.CheckedChanged += checkBox1_CheckedChanged;
        // 
        // pictureBox2
        // 
        self.pictureBox2.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Right)));
        self.pictureBox2.BackColor := System.Drawing.Color.Black;
        self.pictureBox2.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        self.pictureBox2.Location := new System.Drawing.Point(867, 101);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(35, 35);
        self.pictureBox2.TabIndex := 9;
        self.pictureBox2.TabStop := false;
        // 
        // pictureBox3
        // 
        self.pictureBox3.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Right)));
        self.pictureBox3.BackColor := System.Drawing.Color.White;
        self.pictureBox3.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        self.pictureBox3.Location := new System.Drawing.Point(879, 113);
        self.pictureBox3.Name := 'pictureBox3';
        self.pictureBox3.Size := new System.Drawing.Size(35, 35);
        self.pictureBox3.TabIndex := 10;
        self.pictureBox3.TabStop := false;
        // 
        // Layers
        // 
        self.Layers.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Right)));
        self.Layers.FormattingEnabled := true;
        self.Layers.Location := new System.Drawing.Point(867, 557);
        self.Layers.Name := 'Layers';
        self.Layers.Size := new System.Drawing.Size(121, 64);
        self.Layers.Sorted := true;
        self.Layers.TabIndex := 12;
        self.Layers.SelectedIndexChanged += Layers_SelectedIndexChanged;
        // 
        // button3
        // 
        self.button3.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Right)));
        self.button3.Location := new System.Drawing.Point(867, 627);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(25, 23);
        self.button3.TabIndex := 13;
        self.button3.Text := '+';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button4
        // 
        self.button4.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Right)));
        self.button4.Location := new System.Drawing.Point(898, 626);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(25, 23);
        self.button4.TabIndex := 14;
        self.button4.Text := '-';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // Bbrush
        // 
        self.Bbrush.BackColor := System.Drawing.SystemColors.ControlLight;
        self.Bbrush.ForeColor := System.Drawing.Color.White;
        self.Bbrush.Image := (System.Drawing.Image(resources.GetObject('Bbrush.Image')));
        self.Bbrush.Location := new System.Drawing.Point(6, 69);
        self.Bbrush.Name := 'Bbrush';
        self.Bbrush.Size := new System.Drawing.Size(30, 30);
        self.Bbrush.TabIndex := 15;
        self.Bbrush.UseVisualStyleBackColor := false;
        self.Bbrush.Click += Bbrush_Click;
        // 
        // BPencil
        // 
        self.BPencil.BackColor := System.Drawing.SystemColors.ControlLight;
        self.BPencil.Image := (System.Drawing.Image(resources.GetObject('BPencil.Image')));
        self.BPencil.Location := new System.Drawing.Point(6, 105);
        self.BPencil.Name := 'BPencil';
        self.BPencil.Size := new System.Drawing.Size(30, 30);
        self.BPencil.TabIndex := 16;
        self.BPencil.UseVisualStyleBackColor := false;
        self.BPencil.Click += BPencil_Click;
        // 
        // Bfill
        // 
        self.Bfill.BackColor := System.Drawing.SystemColors.ControlLight;
        self.Bfill.Image := (System.Drawing.Image(resources.GetObject('Bfill.Image')));
        self.Bfill.Location := new System.Drawing.Point(6, 141);
        self.Bfill.Name := 'Bfill';
        self.Bfill.Size := new System.Drawing.Size(30, 30);
        self.Bfill.TabIndex := 17;
        self.Bfill.UseVisualStyleBackColor := false;
        self.Bfill.Click += Bfill_Click;
        // 
        // Bpipette
        // 
        self.Bpipette.BackColor := System.Drawing.SystemColors.ControlLight;
        self.Bpipette.Image := (System.Drawing.Image(resources.GetObject('Bpipette.Image')));
        self.Bpipette.Location := new System.Drawing.Point(6, 177);
        self.Bpipette.Name := 'Bpipette';
        self.Bpipette.Size := new System.Drawing.Size(30, 30);
        self.Bpipette.TabIndex := 18;
        self.Bpipette.UseVisualStyleBackColor := false;
        self.Bpipette.Click += Bpipette_Click;
        // 
        // Beraser
        // 
        self.Beraser.BackColor := System.Drawing.SystemColors.ControlLight;
        self.Beraser.Image := (System.Drawing.Image(resources.GetObject('Beraser.Image')));
        self.Beraser.Location := new System.Drawing.Point(6, 213);
        self.Beraser.Name := 'Beraser';
        self.Beraser.Size := new System.Drawing.Size(30, 30);
        self.Beraser.TabIndex := 19;
        self.Beraser.UseVisualStyleBackColor := false;
        self.Beraser.Click += Beraser_Click;
        // 
        // pictureBox4
        // 
        self.pictureBox4.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Right)));
        self.pictureBox4.BackgroundImage := (System.Drawing.Image(resources.GetObject('pictureBox4.BackgroundImage')));
        self.pictureBox4.Location := new System.Drawing.Point(905, 101);
        self.pictureBox4.Name := 'pictureBox4';
        self.pictureBox4.Padding := new System.Windows.Forms.Padding(3);
        self.pictureBox4.Size := new System.Drawing.Size(9, 9);
        self.pictureBox4.TabIndex := 20;
        self.pictureBox4.TabStop := false;
        self.pictureBox4.Click += pictureBox4_Click;
        // 
        // saveFileDialog1
        // 
        self.saveFileDialog1.Filter := 'JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif|PNG Image|*.png';
        self.saveFileDialog1.FilterIndex := 4;
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.Filter := 'JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif|PNG Image|*.png';
        self.openFileDialog1.FilterIndex := 4;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(1000, 662);
        self.Controls.Add(self.pictureBox4);
        self.Controls.Add(self.Beraser);
        self.Controls.Add(self.Bpipette);
        self.Controls.Add(self.Bfill);
        self.Controls.Add(self.BPencil);
        self.Controls.Add(self.Bbrush);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.Layers);
        self.Controls.Add(self.pictureBox2);
        self.Controls.Add(self.pictureBox3);
        self.Controls.Add(self.checkBox1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.pictureBox1);
        self.Controls.Add(self.Smi);
        self.Controls.Add(self.Spl);
        self.Controls.Add(self.comboBox1);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.toolStrip1);
        self.Controls.Add(self.menuStrip1);
        self.DoubleBuffered := true;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.MinimumSize := new System.Drawing.Size(320, 330);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'PaintTool';
        self.Load += Form1_Load;
        self.SizeChanged += Form1_SizeChanged;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.toolStrip1.ResumeLayout(false);
        self.toolStrip1.PerformLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox3)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox4)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
