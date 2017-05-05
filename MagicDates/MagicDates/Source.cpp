#include <iostream>
using namespace std;

int main()
{
	int m, d, y;
	cout << "Enter the month (M): ";
	cin >> m;
	cout << "Enter the year (Y): ";
	cin >> y;
	cout << "Enter the date (D): ";
	cin >> d;

	int magicDayTest = m * d;
	if (magicDayTest == y)
		cout << "This time period is magic."<<endl;
	else
		cout << "This time period is not magic."<<endl;
	return 0;
}