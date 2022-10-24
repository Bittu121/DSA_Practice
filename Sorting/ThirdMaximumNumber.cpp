#include<iostream>
#include<vector>
using namespace std;
int thirdMax(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int max=nums[n-1];
    int count=1;
    for(int i=n-2;i>=0;i--)
        if(nums[i]!=max&&count<=3)
        {max=nums[i];
         count++;
         if(count==3)
             return max;
                        
        }
    
    return nums[n-1];
}
int main(){
    
}

        

