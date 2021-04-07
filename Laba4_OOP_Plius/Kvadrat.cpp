#include "Header.h"
#include <math.h>
#include <iostream>
using namespace std;
//Конструктор з параметрами
Kvadrat::Kvadrat(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->x4 = x4;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
	this->y4 = y4;
	_side = sqrt(pow(this->x2 - this->x1, 2) + pow(this->y2 - this->y1, 2));
}
//Конструктор копіювання
Kvadrat::Kvadrat(const Kvadrat& obj) :
	_side(obj._side), _perimetr(obj._perimetr), _square(obj._square) {}
//Конструктор за замовчуванням
Kvadrat::Kvadrat()
{
	_side = 4;
}
void Kvadrat::SquareCalculation()
{
	_square = pow(_side, 2);
}
void Kvadrat::PerimetrCalculation()
{
	_perimetr = _side * 4;
}
void Kvadrat::SquareData()
{
	SquareCalculation();
	PerimetrCalculation();
	cout << "The side is: " << _side << endl;
	cout << "The perimetr is: " << _perimetr << endl;
	cout << "The square is: " << _square << endl;
}
//Перевантаження оператора + (операторна функція з операндами різних типів)
Kvadrat Kvadrat :: operator+(int number)
{
	Kvadrat K;
	K._side = this->_side + number;
	return K;
}
//Перевантаження оператора /
Kvadrat Kvadrat :: operator/(const Kvadrat& K2)
{
	Kvadrat K;
	K._side = this->_side / K2._side;
	return K;
}
