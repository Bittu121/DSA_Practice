#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) {
    int i=0;
    int j=s.size()-1;
    while(i<j){
        char ans=s[i];
        s[i]=s[j];
        s[j]=ans;
        i++;
        j--;
    }
}
int main(){
    /*
    vector<char>s;
    reverseString(s);
    */
}