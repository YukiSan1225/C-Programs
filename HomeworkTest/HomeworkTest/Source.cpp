#include <iostream>
using namespace std;

void showLocal(); 	//Function Prototype

int main()
{
	for (int count = 0; count < 5; count++)
		showLocal();
	return 0;
}

//Function 
void showLocal()
{
	static int numCalls = 0;
	cout << ++numCalls << endl;
}