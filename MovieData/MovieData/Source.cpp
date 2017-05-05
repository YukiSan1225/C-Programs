#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MovieData
{
	string title, director, year;
	int Mtime;
}data1,data2;

int main()
{
	cout << "Name of Movie: " << endl;
	cin >> data1.title;
	cin >> data2.title;
	cout << "What is the directors name: " << endl;
	cin >> data1.director;
	cin >> data2.director;
	cout << "What year were the movies released? " << endl;
	cin >> data1.year;
	cin >> data2.year;
	cout << "How many minutes does each movie take up? " << endl;
	cin >> data1.Mtime;
	cin >> data2.Mtime;

	cout << "Movies: " << data1.title << "\n" << data2.title << endl;
	cout << "Director: " << data1.director << "\n" << data2.director << endl;
	cout << "Year: " << data1.year << "\n" << data2.year << endl;
	cout << "Movie Time: " << data1.Mtime << "\n" << data2.Mtime << endl;

	return 0;
}