#include <iostream>
#include <math.h>
using namespace std;
double circle()
{
	double r; double area = 0;
	do {
		cout << "Enter the radius of the circle : ";
		cin >> r;
	} while (r < 0);
	
	area = 3.14 * r * r;
	return area;
}
double square()
{
	double h; double area;
	do {
		cout << "Enter the (+)hight of the square : ";
		cin >> h;
	} while (h < 0);
	area = h * h;
	return h;
}
double rectangel()
{
	double h, w; double area;
	do{
		cout << "Enter the (+)hight of the rectangle : ";
		cin >> h;
	} while (h<0);

	do {
		cout << "Enter the (+)width of the rectangle : ";
		cin >> w;
	} while (w < 0);

	area = h * w;
	return area;
}
int main()
{
	int ans;
	do
	{
		cout << "1 - For calculating the area of circle\n";
		cout << "2 - For calculating the area of square\n";
		cout << "3 - For calculating the area of rectangle\n";
		cin >> ans;
	} while (ans != 1 && ans != 2 && ans != 3);

	if (ans == 1)
		cout <<"The area of the circle = "<<circle();
	else if (ans == 2)
		cout << "The area of the square = " << square();
	else if (ans == 3)
		cout << "The area of the rectangle = " << rectangel();
}