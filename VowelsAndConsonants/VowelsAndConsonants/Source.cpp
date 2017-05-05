#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int getVowel(char *[],int);
int getConsonant(char *[], int);

int main()
{
	const int SIZE = 101;
	char entry[SIZE];
	char *entryPtr[SIZE];
	int count = 0;
	int total, totalC;

	cout << "Enter a sentence of no more than " << (SIZE - 1) << " characters:\n";
	cin.getline(entry, SIZE);
		cout << "The sentence you entered is:\n";
		while (entry[count] != 0)
		{
			cout << entry[count];
			entryPtr[count] = &entry[count];
			count++;
		}
		cout << endl;

		total = getVowel(entryPtr, count);
		cout << "The total number of vowels in your sentence is " << total << endl;

		totalC = getConsonant(entryPtr, count);
		cout << "The total number of consonants in your sentence is " << totalC << endl;
	return 0;
}
int getConsonant(char *str[], int t)
{
	int total = 0;
	const int SIZE = 6;
	char vowels[SIZE] = { 'a', 'e', 'i', 'o', 'u', '\O' };
	for (int i = 0; i < t; i++)
	{
		for (int a = 0; a < SIZE; a++)
		{
			if (tolower(*str[i]) != vowels[a])
			{
				total++;
			}
		}
	}
	return total;
}
int getVowel(char *str[], int t)
{
	int total = 0, times = 0;
	const int SIZE = 6;
	char vowels[SIZE] = { 'a', 'e', 'i', 'o', 'u', '\O' };

	for (int i = 0; i < t; i++)
	{
		for (int a = 0; a < SIZE; a++){
			if (tolower(*str[i]) == vowels[a])
			{
				total++;
			}
		}
	}
	return total;
}