#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int n1;
	cin >> n1;
	int arr[100], arr1[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int j = 0; j < n1; j++)
	{
		cin >> arr1[j];
	}
	int max = arr[0];
	int min = arr[0];
	int max1 = arr1[0];
	int min1 = arr1[0];
	cout << "First Commission" << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Max: " << max << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Min: " << min << endl;
	cout << "Second Commission" << endl;
	for (int j = 0; j < n1; j++)
	{
		if (arr1[j] > max1)
		{
			max1 = arr1[j];
		}
	}
	cout << "Max: " << max1 << endl;
	for (int j = 0; j < n1; j++)
	{
		if (arr1[j] < min1)
		{
			min1 = arr1[j];
		}
	}
	cout << "Min: " << min1 << endl;
	if (max > max1)
	{
		cout << "Highest score: " << max << endl;
	}
	else
	{
		cout << "Highest score: " << max1 << endl;
	}
	if (min < min1)
	{
		cout << "Lowest result: " << min << endl;
	}
	else
	{
		cout << "Lowest result: " << min1 << endl;
	}
}
