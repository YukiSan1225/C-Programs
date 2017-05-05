#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	const int size = 50;
	char name[50];
	int count;
	char list[][50] = { "Becky Warren, 555-1223",
	"Joe Looney, 555-0097", "Geri Palmer, 555-8787","Lynn Presnell, 555-8878","Holly Gaddis, 555-8878","Sam Wiggins, 555-0998", "Bob Kain, 555-8712", "Tim Haynes, 555-7676", "Warren Gaddis, 555-9037", "Jean James, 555-4939", "Ron Pamer, 555-2783"};
	cout << "Enter a name or partial name: " << endl;
	cin.getline(name, size);
	cin.ignore();
	for (count = 0; count < 11; count++)
	{
		if (strstr(list[count], name))
			cout << list[count];
	}
	cin.get();
	return 0;
}