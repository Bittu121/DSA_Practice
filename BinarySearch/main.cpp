//Binary Search algorithm using recursive approach

#include<bits/stdc++.h>
using namespace std;
int binarySearch(int*ans, int key, int low, int high) {
    if(low>high)
    return 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (ans[mid] == key)
        return mid;
        if (ans[mid] < key)
        return binarySearch(ans, key, mid + 1, high);
        else
        return binarySearch(ans, key, low, mid - 1);
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of the array :"<<endl;
    cin>>n;
    int*ans=new int[n];
    cout<<"Enter array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int key;
    cout<<"Enter key :"<<endl;
    cin>>key;
    int KeyPosition = binarySearch(ans, key, 0, n - 1);
    cout<<" KeyPosition : "<<KeyPosition;
}
