#include <iostream>
using namespace std;

int searchNumbersBinary(int[], int, int);
int main()
{
	const int count = 10;
	int arrayN[count] = { 13579, 62483, 26791, 77777, 26792, 79422, 33445, 85647, 55555, 93121 };
	int lN;

	cout << "Please enter your 5 digit lottery ticket number: " << endl;
	cin >> lN;

	int result = searchNumbersBinary(arrayN, count, lN);

	if (result == -1)
		cout << "This number is not a winner." << endl;
	else
		cout << "This number is a winner!! Congratulations!!" << endl;

	return 0;
}
int searchNumbersBinary(int Array[], int numElements, int value)
{
	int first = 0, last = numElements - 1, middle, position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (Array[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (Array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}