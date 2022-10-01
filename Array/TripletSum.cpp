
#Given an array and a value, find if there is a triplet in array whose sum is equal to the given value.
#If there is such a triplet present in array, then print the triplet and return true.
#Else return false.

#include <bits/stdc++.h>
using namespace std;
bool TripletSum(int arr[], int n, int sum){
    for (int i = 0; i <n - 2; i++)
	{
	    for (int j = i + 1; j <n - 1; j++){
	        
	        for (int k = j + 1; k <n; k++){
	            
	            if (arr[i] + arr[j] + arr[k] == sum){
	                cout << "TripletSum:" << arr[i] <<", " << arr[j] << ", " << arr[k];
	                return true;
				}
			}
		}
	}
	return false;
}
int main()
{
	int arr[] = { 1, 4, 45, 6, 10, 8 };
	int sum = 22;
	int n = sizeof(arr) / sizeof(arr[0]);
	TripletSum(arr, n, sum);
	return 0;
}

