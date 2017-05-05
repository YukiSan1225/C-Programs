using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.RegularExpressions;

namespace HangmanProjectFromHighSchool
{
    class AssassinsAndTemplars
    {
        private String[] names = { "Ezio Auditore", "Maria Auditore", "Claudia Auditore", "Rodrigo Borja" };
        private Random name = new Random();
        private bool[] namesUsed = new bool[4];
        private int totalNamesUsed = 0;

        public AssassinsAndTemplars()
        {

        }
        public String AssassinOrTemplar()
        {
            if (totalNamesUsed == 4)
            {
                totalNamesUsed = 0;
                for (int i = 0; i < 4; i++)
                {
                    namesUsed[i] = false;
                }
            }
            int n = name.Next(1);
            while (namesUsed[n])
            {
                n = name.Next(1);
            }
            namesUsed[n] = true;
            totalNamesUsed++;
            return names[n];                                                                         

            if(names[n].Equals(totalNamesUsed))
            {
                Console.WriteLine("You are the Master Assassin!!! Oh yeah!");
            }
        }
    }
}