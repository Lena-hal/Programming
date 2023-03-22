namespace ConsoleApp2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = 0;
            string b = Console.ReadLine();
            bool z  = int.TryParse(b, out a);
            Console.WriteLine(z);
        }
    }
}