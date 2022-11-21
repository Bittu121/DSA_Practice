/*
Populate the array
*/
#include<iostream>
using namespace std;
int PopulateArray(int *arr,int n){
	int i=0;
	int j=n-1;
	int count = 1;
	while(i<=j){
		if(count%2==1){
			arr[i]=count;
			count++;
			i++;
		}
		else{
			arr[j]=count;
			count++;
			j--;
		}	
	}
}
int main(){
	int n;
	cout<<"enter a number:"<<endl;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Populate Array :"<<PopulateArray(arr,n);
	cout<<endl;
	delete[] arr;
}

