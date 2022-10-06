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