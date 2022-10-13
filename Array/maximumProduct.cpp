/*
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.
Input: nums = [1,2,3]
Output: 6
*/
#include<iostream>
#include<vector>
int maximumProduct(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    return max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
}
int main(){
    vector<int>nums;
    
}
