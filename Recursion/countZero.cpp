#include<iostream>
using namespace std;
int  countZero(int n){
    if(n==0){
        return 1;
    }
    if(n<=9){
        return 0;
    }
    int ans = countZero(n/10);
    if(n%10==0){
        return ans+1;
    }
    
}
int main(){
    int n;
    cin>>n;
    cout<<countZero(n);
    return 0;
}

