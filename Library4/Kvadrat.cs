using System;

namespace Library4
{
    public class Kvadrat
    {
        private double x1, x2, x3, x4, y1, y2, y3, y4;
        public double Side { get; private set; }
        public double Square { get; private set; }
        public double Perimetr { get; private set; }
        public Kvadrat(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
        {
            this.x1 = x1;
            this.x2 = x2;
            this.x3 = x3;
            this.x4 = x4;
            this.y1 = y1;
            this.y2 = y2;
            this.y3 = y3;
            this.y4 = y4;
            Side = Math.Sqrt(Math.Pow(this.x2 - this.x1,2) + Math.Pow(this.y2 - this.y1,2));
        }
        public Kvadrat(Kvadrat obj)
        {
            Side = obj.Side;
            Square = obj.Square;
            Perimetr = obj.Perimetr;
        }
        public Kvadrat()
        {
            Side = 4;
        }
        private void SquareCalculation()
        {
            Square = Math.Pow(Side,2);
        }
        private void PerimetrCalculation()
        {
            Perimetr = Side * 4;
        }
        public void SquareData()
        {
            SquareCalculation();
            PerimetrCalculation();
            Console.WriteLine($"The side is: {Side}");
            Console.WriteLine($"The perimetr is: {Perimetr}");
            Console.WriteLine($"The square is: {Square:f2}");
        }
        public static Kvadrat operator /(Kvadrat K1, Kvadrat K2)
        {
            Kvadrat K3 = new Kvadrat();
            K3.Side = K1.Side / K2.Side;
            return K3;
        }
        public static Kvadrat operator +(Kvadrat K1, int number)
        {
            K1.Side += number;
            return K1;
        }
    }
}
