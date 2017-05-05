#include <iostream>
using namespace std;

int searchNumbers(int[],int,int);
int main()
{
	const int count = 10;
	int arrayN[count] = {13579,62483,26791,77777,26792,79422,33445,85647,55555,93121};
	int lN;

	cout << "Please enter your 5 digit lottery ticket number: " << endl;
	cin >> lN;

	int result = searchNumbers(arrayN, count, lN);

	if (result == -1)
		cout << "This number is not a winner." << endl;
	else
		cout << "This number is a winner!! Congratulations!!" << endl;

	return 0;
}
int searchNumbers(int arrayN[], int numOfN, int number)
{
	int index = 0, position = -1;
	bool Flag = false;
	while (index < numOfN && !Flag)
	{
		if (arrayN[index] == number)
		{
			Flag = true;
			position = index;
		}
		index++;
	}
	return position;
}