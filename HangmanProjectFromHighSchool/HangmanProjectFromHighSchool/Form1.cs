using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Media;
using WMPLib;

namespace HangmanProjectFromHighSchool
{
    public partial class Form1 : Form
    {
        private Font goodFont;
        private WindowsMediaPlayer ezioTheme = new WindowsMediaPlayer();

        public Form1()
        {
            Thread th = new Thread(new ThreadStart(LoadScreen));
            th.Start();
            Thread.Sleep(5000);
            InitializeComponent();
            th.Abort();
            DoubleBuffered = true;

            ezioTheme.URL = "music.mp3";
            ezioTheme.controls.play();
        }
        public void LoadScreen()
        {
            Application.Run(new Form2());
        }
        private void panel1_Paint(object sender, PaintEventArgs e)
        {
            goodFont = new Font(FontFamily.GenericSansSerif,20,FontStyle.Italic);
            Graphics g = e.Graphics;
            g.DrawString("Assassins Creed Hangman",goodFont,Brushes.GhostWhite,new Point(55,35));
        }

        private void button1_Click(object sender, EventArgs e)
        {
            ACHangman form = new ACHangman();
            this.Hide();
            form.ShowDialog();
            this.Close();
        }
        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
