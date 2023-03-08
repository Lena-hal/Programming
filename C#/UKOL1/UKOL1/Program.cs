using System;

namespace UKOL1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("zadej cislo: ");
            string cislo = Console.ReadLine();
            int intcislo = Convert.ToInt32(cislo);

            Console.WriteLine("zadej desetine cislo: ");
            string desetine = Console.ReadLine();
            double floatcislo = Convert.ToDouble(desetine);

            Console.WriteLine("jejich soucet je:" + (intcislo + floatcislo));
            Console.WriteLine("Soucet cisla:" + intcislo + " a cisla: " + floatcislo + " je: " + (intcislo + floatcislo));

        }
       
    }
}
