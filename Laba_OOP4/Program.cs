using System;
using Library4;
namespace Laba_OOP4
{
    class Program
    {
        static void Main(string[] args)
        {
            Kvadrat K1 = new Kvadrat(); // side = 4
            Kvadrat K2 = new Kvadrat(-1.5, -2, -1.5, 5, 5.5, 5, 5.5, -2);
            Kvadrat K3 = new Kvadrat(-1, -2, 4, -2, 4, 3, -1, 3);
            Console.WriteLine("First square:");
            K1.SquareData();
            Console.WriteLine("\nSecond square:");
            K2.SquareData();
            Console.WriteLine("\nThird square:");
            K3.SquareData();
            Console.WriteLine("\nModified third square:");
            K3 += 5;
            K3.SquareData();
            Console.WriteLine(" 2/3: ");
            K1 = K2 / K3;
            K1.SquareData();
            
        }
    }
}
