// udělej čtverec kterému se zadá velikost a on se oběví na obrazovce, každá strana bude mít jiný znak a jinou barvu

using System;
using System.Collections.Generic;

namespace DU_3_Ctverec
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int width_ratio = 2;
            int height_ratio = 1;

            int size = 0;
            do {
                Console.Write("\n");
                Console.Write("Zadej délku strany: ");
            }
            while (!int.TryParse(Console.ReadLine(), out size));
            Console.Clear();

            
            List<string> sides = new List<string>();
            sides.Add("a");
            sides.Add("#");
            sides.Add("0");
            sides.Add("g");


            for (int i = 0; i < size*height_ratio; i++) // left side
            {
                Console.ForegroundColor = ConsoleColor.Green;
                Console.SetCursorPosition(0, i);
                Console.Write(sides[0]);
            }

            for (int i = 0; i < size * height_ratio; i++) // right side
            {
                Console.ForegroundColor = ConsoleColor.Red;
                Console.SetCursorPosition(size*width_ratio-1, i);
                Console.Write(sides[1]);
            }

            for (int i = 0; i < size* width_ratio; i++) // top side
            {
                Console.ForegroundColor = ConsoleColor.Blue;
                Console.SetCursorPosition(i, 0);
                Console.Write(sides[2]);
            }

            for (int i = 0; i < size * width_ratio; i++) // bottom side
            {
                Console.ForegroundColor = ConsoleColor.Yellow;
                Console.SetCursorPosition(i, size-1);
                Console.Write(sides[3]);
            }
            Console.ForegroundColor = ConsoleColor.White;



        }
    }
}
