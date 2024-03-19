using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int size;
            size = int.Parse(Console.ReadLine());

            for (int i = 1; i <= size; i++)
            {
                for (int j = 1; j <= size - i; j++)
                {
                    Console.Write(" ");
                }
                for (int k = 1; k <= i; k++)
                {
                    Console.Write('*');
                }

                Console.Write('\n');
            }
        }
    }
}
