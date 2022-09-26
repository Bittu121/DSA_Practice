#include<iostream>
using namespace std;
int LengthOfString(char name[]){
	int count=0;
	for(int i=0;name[i]!='\0';i++){
		count++;
	}
	return count;
}
int main(){
	char name[100];
	cout<<"enter your string:"<<endl;
	cin>>name;
	cout<<"Length of string:"<<LengthOfString(name);
}
