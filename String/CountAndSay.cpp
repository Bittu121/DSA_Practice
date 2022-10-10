/*
The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1),
which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of substrings
such that each substring contains exactly one unique digit. Then for each substring, say 
the number of digits, then say the digit. Finally, concatenate every said digit.

For example, the saying and conversion for digit string "3322251":
Given a positive integer n, return the nth term of the count-and-say sequence.
*/
#include<iostream>
#include<string>
using namespace std;
string countAndSay(int n) {
    //Base Case
    if(n==1) return "1";
    if(n==2) return "11";
    string s="11";
    for(int i=3;i<=n;i++){
        string str="";
        s=s+'&';
        int count=1;
        for(int j=1;j<s.length();j++){
            if(s[j]!=s[j-1]){
                str=str+to_string(count);
                str=str+s[j-1];
                count=1;
            }
            else count++;
        }
        s=str;
    }
    return s;
}
int main(){
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    cout<<"countAndSay:"<<countAndSay(n);
}
