/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
    vector<int>v1;
    vector<int>v2;
    
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    
    int n1 = nums1.size();
    int n2 = nums2.size();
    
    int i=0;
    int j=0;
    int ans=INT_MIN;
    while(i<n1 and j<n2){
        if(nums1[i] == nums2[j] and ans != nums1[i]){
            v2.push_back(nums1[i]);
            ans = nums1[i];
            i++;
            j++;
        }
        else if(nums1[i] < nums2[j])
        i++;
        else
        j++;
    }
    return v2; 
}
int main(){
    
}
