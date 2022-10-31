#include<iostream>
#include<vector>
#include<map>
using namespace std;
#include<cstring>
#include<algorithm>
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> v = nums;
    unordered_map<int, int> map;
    sort(v.begin(), v.end());
    map[v[0]] = 0;
    for(int i=1; i<nums.size(); i++) {
        if(v[i] == v[i-1])
        continue;
        map[v[i]] = i;
    }
    for(int i=0; i<nums.size(); i++) {
        v[i] = map[nums[i]];
    }
    return v;
}
int main(){
    
}