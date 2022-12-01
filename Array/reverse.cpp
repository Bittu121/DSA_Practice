/*
Given an array the task is to reverse the array.
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}
Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/
#include<iostream>
using namespace std;
int reverseOfArray(int*arr,int n){
	int i=0;
	int j=n-1;
	while(i<=j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<reverseOfArray(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	delete[] arr;
}
