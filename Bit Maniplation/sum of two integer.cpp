/*
Given two integers a and b, return the sum of the two integers without using the operators + and -.


*/


#include<iostream>
using namespace std;
 int getSum(int a, int b) {
     int ans = 0;
     bool x1 = 0, y1 = 0, carry = 0;
     // iterate through 32 bits
     for (int c = 0; c < 32; c++)
        {
            // get the last bit
            x1 = a & 1;
            y1 = b & 1;

            // get result of adding two bits and any carry over
            ans = (x1^ y1 ^ carry) << c | ans;

            // calculate the new carry over (when atleast two bits are 1)
            carry = (x1 | y1) & (carry | x1) & (carry | y1);

            // truncate one bit
            a >>= 1;
            b >>= 1;
        }

        return ans; 
    }
    int main(){
        int a,b;
        cin>>a>>b;
        cout<<getSum(a,b);
    }
