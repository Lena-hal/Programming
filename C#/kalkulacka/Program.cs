using System;

namespace kalkulacka
{
    internal class Program
    {
        static void Main(string[] args)
        {
            float x, y;
            Console.WriteLine("zadej prvni hodnotu");
            while (!float.TryParse(Console.ReadLine(), out x)) {
                Console.WriteLine("neplatny cislo skus znova ");
            }
            Console.WriteLine("zadej druhó hodnotu");
            while (!float.TryParse(Console.ReadLine(), out y))
            {
                Console.WriteLine("neplatny cislo skus znova ");
            }
            char operace;
            do
            {
                Console.WriteLine("Zadej + pro scitani, * pro nasobeni, - pro odcitani, / pro deleni");
                operace = char.Parse(Console.ReadLine());
            }
            while ((operace != '+') && (operace != '-') && (operace != '*') && (operace != '/'));

            switch (operace) {

                case '+': {
                        Console.WriteLine(x + "+" + y + "=" + vypocty.soucet(x, y));
                        break;
                    }
                case '-': {
                        Console.WriteLine(x + "-" + y + "=" + vypocty.rozdil(x, y));
                        break;
                    }
                case '*':
                    {
                        Console.WriteLine(x + "*" + y + "=" + vypocty.nasobeni(x, y));
                        break;
                    }
                case '/':
                    {
                        Console.Write(x + "/" + y + "=");
                        vypocty.deleni(x, y);
                        Console.WriteLine();
                        break;
                    }

            }

        }
    }
}
