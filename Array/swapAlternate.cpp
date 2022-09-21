#include<iostream>
using namespace std;
void swapAltername(int*arr,int n){
	for(int i=0;i<n-1;i+2){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
}
int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	swapAltername(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	delete[] arr;
}
