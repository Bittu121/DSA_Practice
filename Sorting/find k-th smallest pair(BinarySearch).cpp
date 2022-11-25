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