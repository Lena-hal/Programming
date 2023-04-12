/*
 * ZADÁNÍ:
 * naprogramujte přehledné menu v textovém módu tak aby bylo snadno použitelné i v dalších aplikacích.
 * ve formě proměnných budou dostupné tyto informace:
 *      počet textových položek menu (řádků)
 *      šířka menu (počet znaků)
 *      aktalní položka (bude zvýrazněna nejepe jinou barvou textu i pozadí)
 * Pohyb po menu realizujte pomocí šipek nahoru a dolů nebo pomocí šipek na vedlejší klávesnici.
 * Výběr položek menu bdue ukončovat klávesou Enter.
 * Doporučuji další 2 proměnné x,y které budou udávat polohu menu, tj. jeho levy horni roh.
 * celé menu můžete podbarvit barvou pozadí.
 */

/*
 * ŘEŠENÍ:
 * snažil jsem se udělat co nejvíc obecné řešení, tak aby šlo použít co nejjednodušeji a tak aby mělo možnost rozšíření pokud potřeba.
 * každá položka může mít vlastní barvu (color), vlastní zarovnání (aligment)
 * programátor nejdřív definuje položky menu a poté opakuje renderování a získávání vstupu dokud je menu online
 * v následujícím řešení můžete vidět jednoduché menu s 3 položkami kde:
 *      1. má růžovou barvu a zarovnání doleva
 *      2. je bílé a je zarovnané na střed
 *      3. je bílé a zarovnané na střed
 *      
 * požadované informace jsou získatelné následujícím způsobem:
 *      1. počet položek -> menu.items.Count
 *      2. šířka menu -> menu.menuWidth
 *      3. aktuální položka -> menu.selected má informaci o položce, pokud chcete vědět přesný text použijete menu.items[selected]
 * nevyužité funkce které jsou ale dostupné:
 *      menu.setGlobalAlligment(směr) -> nastaví zarovnání pro všechny položky
 *      menu.changePosRelative(x, y) změní pozici menu relativně k jeho původní pozici
 *      menu.changePosAbsolute(x, y) nastaví pozici menu na určitou hodnotu
 *      
 * pokud uživatel nespecifikuje jinak nebo nenastaví v průběhu kódu tak barva textu bude bílá.
 */

using System;
using System.Collections.Generic;

namespace UKOL2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Menu menu = new Menu(20, 15);
            menu.newItem("test1",ConsoleColor.Magenta);
            menu.newItem("test2d dasdas");
            menu.newItem("test3");
            menu.items[0].Aligment = Aligment.Left;
            menu.items[1].Aligment = Aligment.Center;
            menu.items[2].Aligment = Aligment.Right;

            while (menu.menuOnline)
            {
                menu.render();
                menu.getkey();
            }
            Console.WriteLine("\""+menu.items[menu.selected].text + "\" Byla možnost vybraná uživatelem...");
            
        }
        
    }
    class Menu
    {
        public bool menuOnline { get; private set; }
        public List<Item> items { get; private set; } = new List<Item>();
        public int x { get; private set; }
        public int y { get; private set; }
        public int selected { get; private set; }
        public int menuWidth { 
            get {
                int max = -1;
                for (int i=0; i<items.Count; i++)
                    if (items[i].text.Length > max)
                    {
                        max = items[i].text.Length;
                    }
                return max;
            }
            set { menuWidth = value; }
        }

        public void changePosRelative(int x, int y)
        {
            if (this.x + x > 0 && this.y + y > 0)
            {
                this.x += x;
                this.y += y;
            }

        }
        public void changePosAbsolute(int x, int y)
        {
            if (x > 0 && y > 0)
            {
                this.x = x;
                this.y = y;
            }

        }

        public Menu(int xpos, int ypos) {
            menuOnline = true;
            y = ypos;
            x = xpos;
            selected = 0;
        }

        public void render() {
            Console.SetCursorPosition(x, y);
            for (int i = 0; i < items.Count; i++)
            {
                Console.ForegroundColor = ConsoleColor.White;

                if (i == this.selected)
                {
                    Console.CursorLeft -= 2;
                    Console.Write(">");
                    Console.CursorLeft += 1 + menuWidth + 1;
                    Console.Write("<");
                    Console.CursorLeft -= +menuWidth + 2;
                }
                else
                {
                    Console.CursorLeft -= 2;
                    Console.Write(" ");
                    Console.CursorLeft += 1 + menuWidth + 1;
                    Console.Write(" ");
                    Console.CursorLeft -= +menuWidth + 2;
                }

                Console.ForegroundColor = items[i].color;

                if (items[i].Aligment != Aligment.Left)
                {
                    for (int j = 0; j < (menuWidth - items[i].text.Length); j++)
                    {
                        if (items[i].Aligment == Aligment.Right)
                        {
                            Console.Write(" ");
                        }
                        else
                        {
                            if (j % 2 == 0)
                            {
                                Console.Write(" ");
                            }
                        }
                    }
                }
                Console.WriteLine(items[i].text);
                Console.SetCursorPosition(x, y + i + 1);
            }
        }

        public void newItem(string text) {
            items.Add(new Item(text));
        }
        public void newItem(string text, ConsoleColor color)
        {
            items.Add(new Item(text, color));
        }
        public void setItemAligment(int index, Aligment aligment)
        {
            items[index].Aligment = aligment;
        }
        public void setGlobalAligment(Aligment aligment)
        {
            for (int i = 0;i < items.Count; i++)
            {
                items[i].Aligment = aligment;
            }
        }

        public void getkey()
        {
            switch (Console.ReadKey().Key)
            {
                case ConsoleKey.DownArrow:
                    {
                        if (this.selected < this.items.Count - 1)
                        {
                            this.selected++;
                        }
                        break;
                    }
                case ConsoleKey.UpArrow:
                    {
                        if (this.selected > 0)
                        {
                            this.selected--;
                        }
                        break;
                    }
                case ConsoleKey.Enter:
                    {
                        menuOnline = false;
                        break;
                    }
            }
        }


        internal class Item
        {
            public string text { get; private set; }
            public ConsoleColor color { get; private set; }
            public Aligment Aligment { get; set; }

            public Item(string text){
                this.Aligment = Aligment.Left;
                this.text = text;
                this.color = ConsoleColor.White;
                }
            public Item(string text, ConsoleColor color)
            {
                this.Aligment = Aligment.Left;
                this.color = color;
                this.text = text;
            }
        }
        
    }
    public enum Aligment
    {
        Left,
        Center,
        Right

    }

}
