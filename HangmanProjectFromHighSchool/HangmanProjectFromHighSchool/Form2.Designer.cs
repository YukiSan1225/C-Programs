using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.ComponentModel;
using System.Data;
using System.Drawing;

namespace HangmanProjectFromHighSchool
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form2));
            this.LoadingBar = new System.Windows.Forms.ProgressBar();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.SuspendLayout();
            // 
            // LoadingBar
            // 
            this.LoadingBar.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.LoadingBar.ForeColor = System.Drawing.SystemColors.ControlText;
            this.LoadingBar.Location = new System.Drawing.Point(97, 422);
            this.LoadingBar.Name = "LoadingBar";
            this.LoadingBar.Size = new System.Drawing.Size(305, 23);
            this.LoadingBar.TabIndex = 0;
            // 
            // timer1
            // 
            this.timer1.Enabled = true;
            this.timer1.Interval = 32;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.ClientSize = new System.Drawing.Size(500, 457);
            this.Controls.Add(this.LoadingBar);
            this.DoubleBuffered = true;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "Form2";
            this.ShowInTaskbar = false;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Can You Guess The Word?";
            this.ResumeLayout(false);

        }

        private void ResumeLayout(bool p)
        {
            throw new System.NotImplementedException();
        }

        #endregion

        private System.Windows.Forms.ProgressBar LoadingBar;
        private System.Windows.Forms.Timer timer1;

        public System.EventHandler timer1_Tick { get; set; }

        public System.Drawing.SizeF AutoScaleDimensions { get; set; }

        public System.Windows.Forms.AutoScaleMode AutoScaleMode { get; set; }

        public System.Drawing.Color BackColor { get; set; }

        public string Text { get; set; }

        public System.Windows.Forms.FormStartPosition StartPosition { get; set; }

        public bool ShowInTaskbar { get; set; }

        public string Name { get; set; }

        public System.Windows.Forms.FormBorderStyle FormBorderStyle { get; set; }

        public bool DoubleBuffered { get; set; }
    }
}