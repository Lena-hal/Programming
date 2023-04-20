using System;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int pocet = 0;
            int n = 0;
            Console.WriteLine("Zadej N: ");
            while (!int.TryParse(Console.ReadLine(), out n))
            {
                Console.WriteLine("Zadej N: ");
            }

            for (int i = 3; i < n; i += 3) { 
                    pocet++;
                    Console.WriteLine(i + " je menší jak " + n);
            }
            Console.WriteLine("menších čísel jak " + n + " je " + pocet);
            for (int i=3 ; i < 100; i+=3)
            {
                if (i > 10 && i < 100)
                {
                    Console.WriteLine(i + " je násobek čísla 3 a je dvojciferné");
                }
            }
            
        }
    }
}
