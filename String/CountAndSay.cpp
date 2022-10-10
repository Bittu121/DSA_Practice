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