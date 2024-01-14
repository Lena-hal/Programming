using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace kalkulacka
{
    internal class vypocty
    {

        public static float soucet(float a, float b)
        {
            return a + b;
        }
        public static float rozdil(float a, float b)
        {
            return a - b;
        }
        public static float nasobeni(float a, float b)
        {
            return a * b;
        }
        public static void deleni(float a, float b)
        {
            if (b ==0) {
                Console.Write("nejde dělit nulou");
            }
            else
            {
                Console.Write(a/b);
            }
        }
    }
}
