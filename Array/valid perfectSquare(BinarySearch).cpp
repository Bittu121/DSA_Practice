/*
Given a positive integer num, write a function which returns True if num is a perfect square else False.
Follow up: Do not use any built-in library function such as sqrt.
*/

#include<iostream>
using namespace std;
bool isPerfectSquare(int num) {
        int l=1;
        int r=(l<<31-1);
        while(l<r){
            int mid=(l+r)/2;
            long long ans=(long long)mid*mid;
            if(ans==(long long)num)
                return true;
            else if(ans>(long long)num)
                r=mid-1;
            else
                l=mid+1;
        }
        if((long long)l*l==(long long)num)
            return true;
        return false;
    }
int main(){
    int num;
    cin>>num;
    isPerfectSquare(num);
}
