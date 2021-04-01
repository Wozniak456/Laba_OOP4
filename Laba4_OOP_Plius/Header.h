class Kvadrat
{
private:
	double x1, x2, x3, x4, y1, y2, y3, y4, _side, _square, _perimetr;
	void SquareCalculation();
	void PerimetrCalculation();

public:
	Kvadrat();
	Kvadrat(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	Kvadrat(const Kvadrat& obj);
	friend Kvadrat operator +(Kvadrat K1, int number);
	friend Kvadrat operator /(Kvadrat K1, Kvadrat K2);
	void SquareData();
};
