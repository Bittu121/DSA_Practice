#include<iostream>
using namespace std;
int FirstOccurance(int even[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=0;
    while(s<=e){
        if(even[mid] == key){
            ans=mid;
            e=mid-1;
        }
        else if(key>even[mid]){
            s=mid+1;
        }
        else if(key<even[mid]){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[5]={1,2,3,4,5};
    cout<<"FirstOccurance of three at index:"<<FirstOccurance(even,5,3);
    return 0;
}
