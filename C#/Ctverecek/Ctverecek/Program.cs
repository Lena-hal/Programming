using System;

namespace Ctverecek
{
    class Program
    {
        static void Main()
        {
            float opakovacinkace = 0, avg_obvod = 0, avg_obsah = 0;
            do
            {
                Console.WriteLine("Zadej delku: ");
                int delka = Convert.ToInt32(Console.ReadLine());
                avg_obvod += delka * 4;
                avg_obsah += delka * delka;
                opakovacinkace++;
                if (delka <= 0)
                {
                    Console.WriteLine("Neplatna hodnota!!!");
                }
                else
                {
                    Console.WriteLine("Obvod je " + delka * 4 + " a Obsah je: " + delka * delka);
                }
                Console.WriteLine("chces opakovat? [Y/N]");

            } while ("Y" == Console.ReadLine());
            Console.WriteLine("prumerny obvod je: " + (avg_obvod / opakovacinkace) + " prumerny obsah je: " + (avg_obsah / opakovacinkace));
        }
    }
}
