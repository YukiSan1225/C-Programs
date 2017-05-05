#include <iostream>
using namespace std;

int main()
{
	double accountBalance, checkCharges, bankCharges10 = 10.0, bankCharges15 = 15, bC = 0;
	int checks;
	cout << "What is the balance on the account: ";
	cin >> accountBalance;
	cout << "How many checks did you write? ";
	cin >> checks;
	
	if (checks < 20)
		checkCharges = checks * .10;
	else if (checks >= 20 && checks <= 39)
		checkCharges = checks*.08;
	else if (checks >= 40 && checks <= 59)
		checkCharges = checks*.06;
	else if (checks > 60)
		checkCharges = checks*.04;

	cout << "***Here are the banks service fees for the month on your account***" << endl;

	if (accountBalance < 400.00)
	{
		bC = bC + bankCharges15;
		bC = bC + bankCharges10 + checkCharges;
		cout << "\nBank Charges: " << bC << endl;
	}
	else if (accountBalance < 0)
		cout << "***Urgent!! You account has been overdrawn!!***" << endl;
	else
	{
		bC = bankCharges10 + checkCharges;
		cout << "\nBank Charges: " << bC << endl;
	}
	return 0;
}