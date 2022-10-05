#include<iostream>
using namespace std;
int rob(vector<int>& nums){
    int ans = nums.size();
    if(ans==0)
    return 0;
    vector<int>a(ans);
    if(ans>=1)
    a[0]=nums[0];
    if(ans>=2)
    a[1]=max(nums[0],nums[1]);
    for(int i=2;i<ans;i++)
    a[i]=max(a[i-1],a[i-2]+nums[i]);
    return a[ans-1];
}
int main(){
}