#include<iostream>
using namespace std;
int count(int n){
if(n==0)
return 0;
int smallans = count(n/10);
	return smallans+1;
}
int main(){
	int n;
	cout<<"enter number:"<<endl;
	cin>>n;
	cout<<"total number:"<<count(n)<<" ";
}
