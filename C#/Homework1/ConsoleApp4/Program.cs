//uživatel zadava čisla mezi jedničkou a stem počet vam řekne dopředu udělejte ciferný součet
//udělat pomoci tříd a nebo metod
using System;

namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int pocethodnot=0, soucet=0;
            Console.WriteLine("Kolik Chcheš zadat hodnot?");
            while (!int.TryParse(Console.ReadLine(), out pocethodnot))
            {
                Console.WriteLine("Neplatna hodnota");
            }
            for (int i= 0; i < pocethodnot; i++)
            {
                int cislo = 0;
                Console.WriteLine("zadej cislo: ");
                while (!int.TryParse(Console.ReadLine(), out cislo)) {
                    Console.WriteLine("Neplatna hodnota");
                }

                Number classnum = new Number(cislo);
                soucet += classnum.cifSoucet();
            }
            Console.WriteLine("Ciferný součet je: " + soucet);
            

            
        }
    }
    public class Number
    {
        private int cislo;
        public Number(int num)
        {
            cislo = num;
        }
        public int cifSoucet()
        {
            int soucet = 0;
            while (cislo > 0)
            {
                soucet += cislo % 10;
                cislo = cislo / 10;
            }
            return soucet;
        }
    }
}
