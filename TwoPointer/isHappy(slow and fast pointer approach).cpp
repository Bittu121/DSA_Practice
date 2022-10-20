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
