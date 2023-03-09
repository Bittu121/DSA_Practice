//Find length of string.
//Approach-1
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

//Approach-2
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main(){
    char ans[100];
    cout<<"enter string:"<<endl;
    cin>>ans;
    int count=0;
    for(int i=0;i<ans[i]!='\0';i++){
        count++;
    }
    cout<<"Length"<<count<<endl;
}
