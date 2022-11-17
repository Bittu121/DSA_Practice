/*
Given an integer num, return a string of its base 7 representation.
*/

#include<iostream>
using namespace std;
string convertToBase7(int num){
    if (num < 0) return "-" + convertToBase7(-num);
    if (num < 7) return to_string(num);
    return convertToBase7(num / 7) + to_string(num % 7);
}
int main(){
    int num;
    cin>>num;
    cout<<convertToBase7(num)<<endl;
    return 0;
}   
