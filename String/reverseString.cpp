/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.
*/
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
