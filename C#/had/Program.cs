using System.Collections.Generic;
using System;

namespace had
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<List<state>> list = new List<List<state>>();
            int velikost_mapy = 15;
            for (int i = 0; i < velikost_mapy; i++)
            {
                list.Add(new List<state>());
                for (int j = 0; j < velikost_mapy; j++)
                {
                    list[i].Add(state.nothing);
                }
            }
            Okraj(velikost_mapy, list);
        }
        static void Had(int size, List<List<state>> mapa) { }
        static void Okraj(int size, List<List<state>> mapa)
        {
            Console.Clear();
            List<string> sides = new List<string>();
            sides.Add("a");
            sides.Add("#");
            sides.Add("0");
            sides.Add("g");
            for (int i = 0; i < size; i++) // left side
            {
                Console.ForegroundColor = ConsoleColor.DarkMagenta;
                Console.SetCursorPosition(0, i);
                Console.Write(sides[0]);
                mapa[0][i] = state.wall;
            }
            for (int i = 0; i < size; i++) // right side 
            {
                Console.ForegroundColor = ConsoleColor.DarkCyan;
                Console.SetCursorPosition(size - 1, i);
                Console.Write(sides[1]);
                mapa[size - 1][i] = state.wall;
            }
            for (int i = 0; i < size; i++) // top side 
            {
                Console.ForegroundColor = ConsoleColor.Gray;
                Console.SetCursorPosition(i, 0);
                Console.Write(sides[2]);
                mapa[i][0] = state.wall;
            }
            for (int i = 0; i < size; i++) // bottom side
            {
                Console.ForegroundColor = ConsoleColor.Yellow;
                Console.SetCursorPosition(i, size - 1);
                Console.Write(sides[3]);
                mapa[i][size - 1] = state.wall;
            }
            Console.ForegroundColor = ConsoleColor.White;

            Random cislo = new Random();
            while (true)
            {
                int x_had = cislo.Next(0,mapa.Count);
                int y_had = cislo.Next(0, mapa[0].Count);
                if (mapa[x_had][y_had] != state.wall) {
                    Console.SetCursorPosition(x_had, y_had);
                    Console.ForegroundColor = ConsoleColor.Green;
                    Console.Write("S");
                    Console.ForegroundColor = ConsoleColor.White;
                    mapa[x_had][y_had] = state.snake;
                    break;
                }
            }
            while (true)
            {
                int x_jabko = cislo.Next(0, mapa.Count);
                int y_jabko = cislo.Next(0, mapa[0].Count);
                if (mapa[x_jabko][y_jabko] != state.wall)
                {
                    Console.SetCursorPosition(x_jabko, y_jabko);
                    Console.ForegroundColor= ConsoleColor.Red;
                    Console.Write("Ó");
                    Console.ForegroundColor = ConsoleColor.White;
                    mapa[x_jabko][y_jabko] = state.apple;
                    break;
                }
            }
            Console.SetCursorPosition(size+1, size+1);
        }
    }
    enum state
    {
        apple,
        snake,
        wall,
        nothing
    }
}