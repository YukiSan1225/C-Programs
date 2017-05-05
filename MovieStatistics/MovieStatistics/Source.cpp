#include <iostream>
using namespace std;

void sortingArr(int *[], int);
void findingMode(int[], int);
void AVG(int[], int);

int main()
{
	const int count = 10;
	int arr[count];
	int *arrPtr[count];

	cout << "Please enter in " << count << " numbers of movies each Student watched: ";
	for (int i = 0; i < count; i++)
	{
		*arrPtr[i] = arr[i];
		cin >> arr[i];
	}

	sortingArr(arrPtr, count);
	findingMode(arr, count);
	AVG(arr, count);

	return 0;
}
void sortingArr(int *arrA[], int size)
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
	cout << "The median of this is: " << *arrA[size / 2] << endl;
}
void findingMode(int arr[], int numOfE)
{
	int count, times = 1, howMany = 0, mode = arr[0];
	for (count = 0; count < numOfE - 1; count++)
	{
		if (arr[count] == arr[count + 1]){
			times++;
			if (times > howMany)
			{
				howMany = times;
				mode = arr[count];
			}
		}
		else
			times = 1;
	}

	cout << "The mode is: " << mode << endl;
}
void AVG(int arrA[], int count)
{
	double avg = 0;
	for (int i = 0; i < count; i++)
	{
		avg = avg + arrA[i];
	}
	double result = avg / count;
	cout << "Average is : " << result << endl;
}