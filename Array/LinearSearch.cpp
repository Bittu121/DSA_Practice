#include <iostream>
using namespace std;
int LinearSearch(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n;
	cout << "enter number:" << endl;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int x;
	cin >> x;
	cout << "LinearSearch:" << LinearSearch(arr, n, x);
}
