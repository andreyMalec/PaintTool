procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Palett));
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.comboBox1 := new System.Windows.Forms.ComboBox();
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        self.timer1 := new System.Windows.Forms.Timer(self.components);
        self.button1 := new System.Windows.Forms.Button();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        self.SuspendLayout();
        // 
        // pictureBox1
        // 
        self.pictureBox1.Location := new System.Drawing.Point(6, 33);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(255, 255);
        self.pictureBox1.TabIndex := 0;
        self.pictureBox1.TabStop := false;
        self.pictureBox1.MouseDown += pictureBox1_MouseDown;
        self.pictureBox1.MouseMove += pictureBox1_MouseMove;
        self.pictureBox1.MouseUp += pictureBox1_MouseUp;
        // 
        // comboBox1
        // 
        self.comboBox1.FormattingEnabled := true;
        self.comboBox1.Items.AddRange(new System.Object[1]('Градации серого'));
        self.comboBox1.Location := new System.Drawing.Point(6, 6);
        self.comboBox1.Name := 'comboBox1';
        self.comboBox1.Size := new System.Drawing.Size(255, 21);
        self.comboBox1.TabIndex := 1;
        self.comboBox1.Text := 'Выберите тип палитры';
        self.comboBox1.SelectedIndexChanged += comboBox1_SelectedIndexChanged;
        // 
        // pictureBox2
        // 
        self.pictureBox2.BackColor := System.Drawing.SystemColors.ControlText;
        self.pictureBox2.Location := new System.Drawing.Point(267, 6);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(70, 70);
        self.pictureBox2.TabIndex := 2;
        self.pictureBox2.TabStop := false;
        // 
        // timer1
        // 
        self.timer1.Interval := 10;
        self.timer1.Tick += timer1_Tick;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(267, 82);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(70, 21);
        self.button1.TabIndex := 3;
        self.button1.Text := 'Сохранить';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Palett
        // 
        self.ClientSize := new System.Drawing.Size(561, 365);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.pictureBox2);
        self.Controls.Add(self.comboBox1);
        self.Controls.Add(self.pictureBox1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedToolWindow;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Palett';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Палитра';
        self.FormClosed += Palett_FormClosed;
        self.Load += Palette_Load;
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        self.ResumeLayout(false);
    end;
