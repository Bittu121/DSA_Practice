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
