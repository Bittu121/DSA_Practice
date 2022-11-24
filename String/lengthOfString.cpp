/*
Find the Length of string  
input Bittu
output 5
*/
#include<iostream>
#include<cstring>
using namespace std;
/*
int lengthOfString(char name[]){
	int count=0;
	int ans=strlen(name);
	int i=1;               //o(1) Time complexity
	while(i<=ans){
		i++;
		count++;
	}
	return count;
}
int main(){
	char name[100];
	cout<<"enter your name:"<<endl;
	cin>>name;
	cout<<"length:"<<lengthOfString(name)<<endl;
}
*/

/*
#include<iostream>
#include<cstring>
using namespace std;
int lengthOfString(char name[]){
	int count=0;
	for(int i=0;name[i]!='\0';i++){      O(n) Time complexity
		count++;
	}
	return count;
}
*/
int lengthOfString(char*name,int n){
	int count=0;

	int i=1;               //o(1) Time complexity
	while(i<n){
		if(name[i]!='\0'){
			i++;
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	cout<<"enter your number:"<<endl;
	cin>>n;
	char *name = new char[100];
	cout<<"enter your name:"<<endl;
	for(int i=0;i<n;i++){
		cin>>name[i];
	}
	cout<<"length:"<<lengthOfString(name,n)<<endl;
	delete name;
}

