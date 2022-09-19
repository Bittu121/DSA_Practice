Find the maximum element in the array
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number:"<<endl;
	cin>>n;
	int arr[20];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	int max=INT_MIN;
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"maximum value:"<<max;
	
	
}
*/
#include<iostream>
using namespace std;
void MaxValue(int arr[],int n){
	int max = INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"maximum value:"<<max;
}
int main(){
	int n;
	cout<<"enter number :"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	MaxValue(arr,n);
}

