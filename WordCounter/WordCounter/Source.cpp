#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int numberOfWords(string *, int);
int main()
{
	const int count = 30; bool Sentinel = true;
	int i = 0;
	string wor = "Done";
	string *word[count];
	string numOfWords[count];
	while (Sentinel && i < count)
	{
		cout << "Enter up to 30 words: ";
		cin>>numOfWords[i];
		word[i] = &numOfWords[i];
		if (numOfWords[i] == wor)
		{
			Sentinel = false;
		}
		i++;
	}
	int amount = numberOfWords(*word, i);

	cout << "This program has " << amount << " words in it." << endl;
}
int numberOfWords(string *words, int c)
{
	return c;
}