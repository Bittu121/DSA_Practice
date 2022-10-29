/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing 
all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Input: s = "A man, a plan, a canal: Panama"
Output: true

Input: s = "race a car"
Output: false

Input: s = " "
Output: true

*/


#include<iostream>
using namespace std;
#include<cstring>
bool isPalindrome(string s) {
    int start=0,end=s.length()-1;
    while(start<=end){
        if(!isalnum(s[start])){
            start++;
            continue;
        }
        if(!isalnum(s[end])){ //isalnum to check whether its alphabet or number

            end--;
            continue;
        }
        if(tolower(s[start])!=tolower(s[end])){ //tolower to cover it into lower case incase its case sensitiv
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
int main(){
    string s;
    cin>>s;
    bool ans=isPalindrome(s);
    cout<<ans<<endl;
}
