#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MonthlyBudget
{
	double housing, ut, he, trans, food, medi, insu, enter, cloth, mis;
}house;

void calculatingBudget(double,double,double,double,double,double,double,double,double,double);
int main()
{
	cout << "Housing: ";
	cin >> house.housing;
	cout << "Utilities: ";
	cin >> house.ut;
	cout << "Household Expenses: ";
	cin >> house.he;
	cout << "Transportation ";
	cin >> house.trans;
	cout << "Food ";
	cin >> house.food;
	cout << "Medical: ";
	cin >> house.medi;
	cout << "Insurance: ";
	cin >> house.insu;
	cout << "Entertainment: ";
	cin >> house.enter;
	cout << "Clothing: ";
	cin >> house.cloth;
	cout << "Miscellaneous: ";
	cin >> house.mis;

	double balance;
	cout << "\n\nWhat is the monthly income? ";
	cin >> balance;

	calculatingBudget(balance, house.cloth, house.enter, house.food, house.he, house.housing, house.insu, house.medi, house.mis, house.trans);

	return 0;
}
void calculatingBudget(double b, double c, double e, double f, double he, double h, double i, double m, double mi, double t)
{
	double total = c + e + f + he + h + i + m + mi + t;
	if (b > total)
		cout << "\nYou have a surplus in income. " << endl;
	else
		cout << "\nYou have a shortage of income. " << endl;
}