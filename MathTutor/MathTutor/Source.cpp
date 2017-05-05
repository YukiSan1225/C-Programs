#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int answer, n1 = rand() , n2 = rand();
	
	cout << setw(6) << n1 <<endl;
	cout << "+" << setw(4) << n2 << endl;
	cout << "_______";

	cout << "\n\nWhat is the answer? ";
	cin >> answer;

	if (answer == (n1 + n2))
		cout << "Congrats! That is correct!"<<endl;
	else
		cout << "Try again. This answer really is " << (n1 + n2) << endl;
	return 0;
}