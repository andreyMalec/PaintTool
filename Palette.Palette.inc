procedure InitializeComponent;
    begin
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.SuspendLayout();
        // 
        // pictureBox1
        // 
        self.pictureBox1.Location := new System.Drawing.Point(6, 6);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(255, 255);
        self.pictureBox1.TabIndex := 0;
        self.pictureBox1.TabStop := false;
        // 
        // Palette
        // 
        self.ClientSize := new System.Drawing.Size(561, 365);
        self.Controls.Add(self.pictureBox1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedToolWindow;
        self.Name := 'Palette';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Палитра';
        self.Load += Palette_Load;
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.ResumeLayout(false);
    end;
