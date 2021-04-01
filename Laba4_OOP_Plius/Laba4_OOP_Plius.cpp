#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	Kvadrat K1 = Kvadrat();
	Kvadrat K2 = Kvadrat(-1.5, -2, -1.5, 5, 5.5, 5, 5.5, -2);
	Kvadrat K3 = Kvadrat(-1, -2, 4, -2, 4, 3, -1, 3);
	cout << "First square: " << endl;
	K1.SquareData();
	cout << "\nSecond square: " << endl;
	K2.SquareData();
	cout << "\nThird square: " << endl;
	K3.SquareData();
	cout << "\nModified third square: " << endl;
	K3 = K3 + 5;
	K3.SquareData();
	cout << "\n2/3" << endl;
	K1 = K2 / K3;
	K1.SquareData();
}
