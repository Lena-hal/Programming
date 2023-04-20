// Vygenerujte náhodné rodné číslo pro muže a pro ženu, cifry za lomítkem zvolte opravdu náhodně. Uvažujte pouze den narození od 1 do 28.

using System;

namespace Birth_registration_number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            int gender = 0;
            if (random.Next(0,1) == 1)
            {
                gender = 50;
            }
            int year = random.Next(0, 99);
            int month = random.Next(1, 12) + gender;
            int day = random.Next(1, 28);
            int num = random.Next(0, 9999);
            if (year < 10)
            {
                Console.Write("0");
            }
            Console.Write(year);

            if (month < 10) 
            {
                Console.Write("0");
            }
            Console.Write(month);

            if (day < 10)
            {
                Console.Write("0");
            }
            Console.Write(day);
            Console.Write("/");
            if (num < 1000) {
                Console.Write("0");
                if (num < 100) {
                    Console.Write("0");
                    if (num < 10)
                    {
                        Console.Write("0");
                    }
                }
            }
            Console.Write(num);
        }
    }
}
