#include<iostream>
#include<algorithm>
#include<cmath>
int power(int x,int n){
	if(n==0){
		return 1;
	}
   	int p = power(x,n-1);
	return x*p;
}
using namespace std;
int main(){
	int x,n;
	cout<<"enter number:"<<endl;
	cin>>x>>n;
	cout<<"power:"<<" "<<power(x,n);
}
