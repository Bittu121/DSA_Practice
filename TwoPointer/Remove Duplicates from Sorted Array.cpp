/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that 
each unique element appears only once. The relative order of the elements should be kept the same.


*/


#include<iostream>
using namespace std;
#include<vector>;
int removeDuplicates(vector<int>& nums) {
    int ans = 0;
    for(int i = 1;i<nums.size(); i++){
        if(nums[i]!=nums[ans]){
            ans++;
            nums[ans] = nums[i];          
        }
    }
    return ans+1;
}
int main(){
    
}
