#include <iostream>
using namespace std;

void arrSelectSort(int *[], int);
void showArray(int[], int);
void average(int *[], int);
int main()
{
	const int count = 15;
	int arr[count] = {};
	int addition;

	int *arrPtr[count];
	cout << "Please enter up to 15 test scores: ";
	for (int i = 0; i < count; i++)
	{
		arrPtr[i] = &arr[i];
		cin >> arr[i];
	}

	cout << "Here are the test scores in order: ";
	arrSelectSort(arrPtr, count);
	showArray(arr, count);

	average(arrPtr, count);

	return 0;
}
void arrSelectSort(int *arrA[], int size)
{
	int start, minIndex;
	int *minElem;

	for (start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minElem = arrA[start];
		for (int index = start + 1; index < size; index++)
		{
			if (*(arrA[index]) < *minElem)
			{
				minElem = arrA[index];
				minIndex = index;
			}
		}
		arrA[minIndex] = arrA[start];
		arrA[start] = minElem;
	}
}
void showArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void average(int *arrA[], int numOfElements)
{
	double avg = 0;
	for (int i = 0; i < numOfElements; i++)
	{
		avg = avg + *arrA[i];
	}
	avg = avg / numOfElements;

	cout << "Average of these grades are: " << avg << endl;
}