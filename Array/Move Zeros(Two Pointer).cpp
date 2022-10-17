/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

*/




#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int ans=nums.size();
    int last=0;
    for(int i=0;i<ans;i++){
        if(nums[i]==0){
            last=max(i,last);
            while(last<ans && nums[last]==0)
            last++;
            if(last==ans)
            return;
            swap(nums[i],nums[last]);
        }
    }
    return;
}

int main(){
    
}
