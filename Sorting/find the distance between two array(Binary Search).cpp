#include<iostream>
#include<vector>
using namespace std;
int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int ans = arr1.size();
    int ans1 = arr2.size();
    sort(arr2.begin(), arr2.end());
    int count = 0;
    for (int i = 0; i < ans; i++) {
        int left = 0, right = ans1-1, x = arr1[i] - d, y = arr1[i] + d;
        while (left <= right) {
            int mid = left+ (right-left)/2;
            if (arr2[mid] < x) {
                left = mid + 1;
            }
            else if (arr2[mid] > y) {
                right = mid - 1;
            }
            else {
                count++; break;
            }
        }
    }
    return ans - count;
}
int main(){
    
}