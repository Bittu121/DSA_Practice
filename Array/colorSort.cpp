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
