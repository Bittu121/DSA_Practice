/*
The distance of a pair of integers a and b is defined as the absolute difference between a and b.

Given an integer array nums and an integer k, return the kth smallest distance among all the pairs nums[i] and nums[j] where 0 <= i < j < nums.length.
Input: nums = [1,3,1], k = 1
Output: 0
Input: nums = [1,1,1], k = 2
Output: 0 
*/
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool check(vector<int>& nums, int mid, int k){
    int total = 0;
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        while(j < nums.size() && nums[j]-nums[i] <= mid) j++;
        j--;
        total += (j - i);
    }
    return total >= k;
}
    
int smallestDistancePair(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int left = 0, right = nums[n-1] - nums[0];
    while(left < right){
        int mid = left + (right - left)/2;
        if(check(nums, mid, k)) right = mid;
        else left = mid + 1;
    }
    return left;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
        cout<<smallestDistancePair(nums,k);
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
