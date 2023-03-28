using System;


namespace Hruska
{
    class Program
    {
        static void Main(string[] args)
        {
            int soucet_hrusek=0, pocet_aut=0, soucet_jablek=0, soucet=0, jabko_auto=0, hrusko_auto=0;
            bool zadavase = true;
            do
            {
                Console.WriteLine("Zadej ovoce (hruska, jablko):");
                switch (Console.ReadLine())
                {

                    case "hruska":
                        {
                            int hrusky = 0;
                                Console.WriteLine("Zadej vahu nakladu hrušek: ");
                                if(!int.TryParse(Console.ReadLine(), out hrusky))
                                {
                                    Console.WriteLine("Neplatna hodnota");
                                    break;
                                }
                                if (hrusky == 0)
                            {
                                zadavase = false;
                                break;
                            }
                            if (hrusky < 0)
                            {
                                Console.WriteLine("zaporna hodnota neni platna, zkus to znova...");
                                break;
                            }
                            soucet_hrusek += hrusky;
                                soucet += hrusky;
                                pocet_aut++;
                                hrusko_auto++;
                            break;
                        }

                    case "jablko":
                        {
                            int jabka = 0;
                            Console.WriteLine("Zadej vahu nakladu jablek: ");
                            if (!int.TryParse(Console.ReadLine(), out jabka))
                            {
                                Console.WriteLine("Neplatna hodnota");
                                break;
                            }
                            if (jabka == 0)
                            {
                                zadavase = false;
                                break;
                            }
                            if (jabka < 0)
                            {
                                Console.WriteLine("zaporna hodnota neni platna, zkus to znova...");
                                break;
                            }
                            soucet_jablek += jabka;
                            soucet += jabka;
                            pocet_aut++;
                            jabko_auto++;
                            break;
                        }
                    default:
                        {
                            Console.WriteLine("Neplatna hodnota ovoce, mozna nějaka chyba v pismu? (jablko/hruska)");
                            break;
                        }
                }
            } while (zadavase == true);

            if (pocet_aut > 0) {
                Console.WriteLine("Dohromady se odvezlo {0}kg jablek, {1}kg hrušek.\nOdjelo {2} nakladaku s jablky a {3} nakladaků s hrušky.\n pruměrna naloženost nakladaku byla: {4}", soucet_jablek, soucet_hrusek, jabko_auto, hrusko_auto, (float)soucet / pocet_aut);
                    }
            else
            {
                Console.WriteLine("Dohromady se odvezlo {0}kg jablek, {1}kg hrušek.\nOdjelo {2} nakladaku s jablky a {3} nakladaků s hrušky.\n Průměrna naloženost nejde vypočítat protože odjelo 0 nakla´dáků.", soucet_jablek, soucet_hrusek, jabko_auto, hrusko_auto);
            }
            Console.ReadKey();
        }
    }
}
