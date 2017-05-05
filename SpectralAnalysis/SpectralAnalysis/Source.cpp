#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double waves;
	cout << "Please enter the wavelength (in meters): ";
	cin >> waves;
	
	if (waves >= (1.00*(pow(10, (2.0 - 4)))))
		cout << "Type of wave: Radio Wave" << endl;
	else if (waves < (1.00*(pow(10, (2.0 - 4)))) && waves >= (1.00*(pow(10, (2.0 - 5)))))
		cout << "Type of wave: Microwave" << endl;
	else if (waves < (1.00*(pow(10, (2.0 - 5)))) && waves >= (7.00*(pow(10, (2.0 - 9)))))
		cout << "Type of wave: Infrared" << endl;
	else if (waves < (7.00*(pow(10, (2.0 - 9)))) && waves >= (4.00*(pow(10, (2.0 - 9)))))
		cout << "Type of wave: Visable Light" << endl;
	else if (waves < (4.00*(pow(10, (2.0 - 9)))) && waves >= (1.00*(pow(10, (2.0 - 10)))))
		cout << "Type of wave: Ultraviolet" << endl;
	else if (waves < (1.00*(pow(10, (2.0 - 10)))) && waves >= (1.00*(pow(10, (2.0 - 13)))))
		cout << "Type of wave: X Rays" << endl;
	else if (waves < (1.00*(pow(10, (2.0 - 13)))))
		cout << "Type of waves: Gamma Rays" << endl;

	return 0;
}