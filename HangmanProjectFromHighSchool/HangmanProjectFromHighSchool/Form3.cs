using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HangmanProjectFromHighSchool
{
    public partial class ACHangman : Form
    {
        private int misses;
        private Boolean[] lettersUsed;
        private String thisWord;
        private String displayWord;
        private String lettersGuessed;
        private int charCount;
        private int charsReplaced;
        private AssassinsAndTemplars wordList = new AssassinsAndTemplars();

        public ACHangman()
        {
            InitializeComponent();
            DoubleBuffered = false;
            GameCode();
            gameOver();
        }
        private void newGameToolStripMenuItem_Click(object sender, EventArgs e)
        {
            GameCode();
            refresh();
        }
        private void exitProgramToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void mainMenuToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form1 form = new Form1();
            this.Hide();
            form.ShowDialog();
            this.Close();
        }

        public void GameCode()
        {
            misses = 0;
            SwordEditor.Refresh();
            lettersGuessed = "--------------------------";
            charCount = 0;
            charsReplaced = 0;
            thisWord = wordList.AssassinOrTemplar().ToUpper();
            displayWord = "";

            lettersUsed = new Boolean[26];

            foreach (char ch in thisWord)
            {
                if (char.IsLetter(ch))
                {
                    displayWord = displayWord + "*";
                    charsReplaced++;
                }

                else
                    displayWord = displayWord + ch;
            }
            WordBox.Text = displayWord;
            WrongLetters.Text = lettersGuessed;
        }
        private void Buttons(object sender, EventArgs e)
        {
            Button b = (Button)sender;
            char ch = b.Text[0];

            thisGuess(ch);
        }

        private Boolean findCharacters(char thisChar)
        {
            Boolean foundChar = false;

            for (int i = 0; i < thisWord.Length; i++)
            {
                if (thisWord[i] == thisChar)
                {
                    charCount++;
                    displayWord = displayWord.Substring(0, i) + thisChar + displayWord.Substring(i + 1);
                    foundChar = true;
                }
            }
            return foundChar;
        }
        private void thisGuess(char ch)
        {
            int index = ch - 65;
            if (lettersUsed[index] == false)
            {
                lettersUsed[index] = true;
                lettersGuessed = lettersGuessed.Substring(0, index) + ch + lettersGuessed.Substring(index + 1);

                Boolean a = findCharacters(ch);

                if (a == false)
                    misses++;

                refresh();
                gameOver();
            }
        }
        private void gameOver()
        {
            if (misses == 6)
            {
                WordBox.Text = thisWord;
                MessageBox.Show(this,"You are a disgrace to our family! Begone!","ACHangman",MessageBoxButtons.OK);
            }
            else if (charsReplaced == charCount)
            {
                MessageBox.Show(this, "You are a true assasin.","ACHangman",MessageBoxButtons.OK);
            }
        }
        public void refresh()
        {
            WordBox.Text = displayWord;
            WrongLetters.Text = lettersGuessed;
            SwordEditor.Refresh();
        }
    }
}
