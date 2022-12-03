/*
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).
Note
Note that in some languages, such as Java, there is no unsigned integer type. In this case, the input will be given as a signed integer type. It should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.
In Java, the compiler represents the signed integers using 2's complement notation. Therefore, in Example 3, the input represents the signed integer. -3.
Input: n = 00000000000000000000000000001011
Output: 3
Input: n = 00000000000000000000000010000000
Output: 1
Input: n = 11111111111111111111111111111101
Output: 31
*/
#include<iostream>
using namespace std;
int hammingWeight(uint32_t n) {
    int count = 0;
    while(n){
        n&=n-1;
        count++;
    }
    return count;
}
int main(){
    
}
