using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int size;
            size=int.Parse(Console.ReadLine());

            for (int i = 0; i < size; i++)
            {              
                for (int j = 0; j <= i; j++)
                {
                    Console.Write("*");                   
                }
                Console.Write('\n');
            }            
        }
    }
}
