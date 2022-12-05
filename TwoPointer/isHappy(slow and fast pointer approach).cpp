/*
Write an algorithm to determine if a number n is happy.
A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.
Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

*/

#include<iostream>
using namespace std;
int help(int n){
    int ans=0;
    while(n){
        int temp=n%10;
        ans+=(temp*temp);
        n/=10;
    }
    return ans;
}
bool isHappy(int n) {
    int slow_ptr=n,fast_ptr=n;
    do{                               // slow and fast pointer approach
        slow_ptr=help(slow_ptr);
        fast_ptr=help(help(fast_ptr));
    }
    while(slow_ptr!=fast_ptr);
    return slow_ptr==1;
}
int main(){
    int n;
    cin>>n;
    isHappy(n);
}
