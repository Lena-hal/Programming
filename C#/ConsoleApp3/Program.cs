using System;

namespace ConsoleApp3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Random cislo = new Random();
            float num1 = cislo.Next(-20, 21);
            float num2 = cislo.Next(-10, 11);
            int znamenko = cislo.Next(0, 5);
            float vysledek = 0;
            switch (znamenko)
            {
                    case 0:
                    {
                        Console.WriteLine(num1 + " + " + num2 + " = ");
                        vysledek = num1 + num2;
                        break;
                    }
                    case 1:
                    {
                        Console.WriteLine(num1 + " - " + num2 + " = ");
                        vysledek = num1 - num2;
                        break;
                    }
                    case 2:
                    {
                        Console.WriteLine(num1 + " * " + num2 + " = ");
                        vysledek = num1 * num2;
                        break;
                    }
                    case 3:
                    {
                        if (num2 == 0)
                        {
                            num2 = cislo.Next(-10, 11);
                        }
                        Console.WriteLine(num1 + " / " + num2 + " = ");
                        vysledek = num1 / num2;
                        break;
                    }
                    case 4:
                    {
                        if (num2 == 0)
                        {
                            num2 = cislo.Next(-10, 11);
                        }
                        Console.WriteLine(num1 + " % " + num2 + " = ");
                        vysledek = num1 % num2;
                        break;
                    }
 
            }
            float a;
            while (!float.TryParse(Console.ReadLine(), out a))
            {
                Console.WriteLine("=");
            }
            if (a == vysledek)
            {
                Console.ForegroundColor = ConsoleColor.Green;
                Console.WriteLine("Správně");
            }
            else
            {
                Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine("Špatně:"+ vysledek);
            }
            Console.ForegroundColor = ConsoleColor.White;
        }
    }
}
