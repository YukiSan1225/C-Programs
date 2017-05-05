#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CustomerInformation
{
	string name, address, city, state, zip, tNum, pDate;
	double balance;
}cInfo[1];
int main()
{
	const int count = 1;
	cout << "Welcome! Please enter in the information as asked please: " << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "Name: " << endl;
		getline(cin,cInfo[i].name);
		cout << "Address: " << endl;
		getline(cin,cInfo[i].address);
		cout << "City, State, and ZIP" << endl;
		getline(cin,cInfo[i].city);
		getline(cin,cInfo[i].state);
		getline(cin,cInfo[i].zip);
		cout << "Telephone number: " << endl;
		getline(cin, cInfo[i].tNum);
		cout << "Balance: " << endl;
		cin>>cInfo[i].balance;
		cout << "Date of last payment: " << endl;
		getline(cin,cInfo[i].pDate);
	}

	for (int i = 0; i < count; i++)
	{
		cout << "Here is all the information that is included in this file: \n\n";
		cout << cInfo[i].name << ": " << cInfo[i].address << ", " << cInfo[i].city << ", " << cInfo[i].state << ", " << cInfo[i].zip << ", " << cInfo[i].balance << ": " << cInfo[i].pDate << endl;
		cout << endl;
	}

	return 0;
}