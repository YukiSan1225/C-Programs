#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double const PI = 3.14;
	cout << "Geometry Calculator";
	cout << "\n\n1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle" << endl;
	cout << "4. Quit" << endl;

	cout << "\nEnter your choice(1-4): ";

	int choice;
	cin >> choice;

	if (choice == 1)
	{
		double areaC, radius;
		cout << "What is the radius of the circle? ";
		cin >> radius;
		if (radius < 0)
			cout << "Error: radius can not be a negative number!!" << endl;
		areaC = PI * pow(radius, 2.0);
		cout << "The area of the circle is " << areaC << endl;
	}
	else if (choice == 2)
	{
		double areaR, length, width;
		cout << "What is the length of the rectangle? ";
		cin >> length;
		cout << "What is the width? ";
		cin >> width;

		if (length < 0 || width < 0)
			cout << "The length or/and width can not be negative!!" << endl;

		areaR = length*width;

		cout << "The area of the rectangle is " << areaR << endl;
	}
	else if (choice == 3)
	{
		double areaT, lengthT, height;
		cout << "What is the length of the triangle? ";
		cin >> lengthT;
		cout << "What is the height? ";
		cin >> height;

		if (lengthT < 0 || height < 0)
			cout << "The length or/and height can not be negative." << endl;

		areaT = lengthT * height * 0.5;

		cout << "The area of the triangle " << areaT << endl;
	}
	else if (choice == 4)
		exit(0);
	else
		cout << "The number that you put in is not a choice. Please correct this mistake and try again! Thank you!!! :)" << endl;

	return 0;
}