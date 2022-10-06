/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.
Return any array that satisfies this condition.
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> sortArrayByParity(vector<int>& nums){
    int i=0;
    int j=nums.size()-1;
    while(i<j){
        if(nums[i]%2!=0){
            swap(nums[i],nums[j]);
            i--;
            j--;
        }
        i++;
    }
    return nums;
}
int main(){
    /*
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<nums.size();i++){
        nums.push_back(i);
    }
    sortArrayByParity(nums);
    */
}
