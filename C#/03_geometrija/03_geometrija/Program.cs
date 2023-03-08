using System;

namespace _03_geometrija
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("zadej tvar:");
            string tvar = Console.ReadLine();
            switch (tvar)
            {
                case "ctverec":
                    Console.WriteLine("zadej delku strany: ");
                    int delka = Convert.ToInt32(Console.ReadLine());
                    Console.WriteLine("obvod je: " + delka * 4 + " obsah je:" + delka * delka);
                    break;
            };
        }
    }
}
