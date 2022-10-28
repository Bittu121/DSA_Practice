/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
#include<iostream>
using namespace std;
#include<vector>
bool containsDuplicate(vector<int>& nums) {
    set<int>ans;
    for(int i=0;i<nums.size();i++){
        if(ans.find(nums[i])!=ans.end())
        return true;
        ans.insert(nums[i]);
    }
    return false;
}
int main(){
    
}
