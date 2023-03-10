//sum of all the elements of the array
#include<iostream>
using namespace std;
void Sum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum = sum+arr[i];
	}
	cout<<"Sum of all the elements :"<<sum<<" ";
}
int main(){
	int n;
	cout<<"enter number:"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	Sum(arr,n);
}

//Dynamically
#include<iostream>
using namespace std;
void Sum(int*arr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum = sum+arr[i];
	}
	cout<<"Sum of all the elements :"<<sum<<" ";
}
int main(){
	int n;
	cout<<"enter number:"<<endl;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	Sum(arr,n);
}
