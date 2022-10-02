/*
Given an array nums with n objects colored red, white, or blue,sort them in-place so that objects of the same color are adjacent, 
with the colors in the order red, white, and blue.We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.
*/

#include<iostream>
using namespace std;
#include<vector>
    void sortColors(vector<int>& nums) {
        vector<int>v(3);
        for(int i=0;i<(int)nums.size();i++){
            v[nums[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<=2;i++){
            for(int j=0;j<v[i];j++){
                ans.push_back(i);
            }
        }
        nums=ans;
    }
