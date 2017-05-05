using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.ComponentModel;
using System.Data;
using System.Drawing;

namespace HangmanProjectFromHighSchool
{

    class TheMainDeal : Panel
    {
        //Damien Burks is the best person in the WORLD!!!!!!! :)
        private int misses;

        public TheMainDeal()
        {
            DoubleBuffered = true;
        }

        public int WhatIMiss
        {
            get { return misses; }
            set { misses = value; }
        }
        protected override void OnPaint(PaintEventArgs e)
        {
            base.OnPaint(e);
            Graphics graphics = e.Graphics;
            switch(misses)
            {
                case 0: graphics.DrawImage(HangmanProjectFromHighSchool.Properties.Resources.NoMissSword1, 29, 277);
                    break;
                case 1: graphics.DrawImage(HangmanProjectFromHighSchool.Properties.Resources.Missed1Sword, 29, 277);
                    break;
                case 2: graphics.DrawImage(HangmanProjectFromHighSchool.Properties.Resources.Missed2Sword, 29, 277);
                    break;
                case 3: graphics.DrawImage(HangmanProjectFromHighSchool.Properties.Resources.Missed2Sword, 29, 277);
                    break;
                case 4: graphics.DrawImage(HangmanProjectFromHighSchool.Properties.Resources.Missed3Sword, 29, 277);
                    break;
                case 5: graphics.DrawImage(HangmanProjectFromHighSchool.Properties.Resources.Missed4Sword, 29, 277);
                    break;
                case 6: graphics.DrawImage(HangmanProjectFromHighSchool.Properties.Resources.Missed5Sword, 29, 277);
                    break;
                case 7: graphics.DrawImage(HangmanProjectFromHighSchool.Properties.Resources.YouLoseSword, 29, 277);
                    break;

            }
        }
    }
}
