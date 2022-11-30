// #include<iostream>
// using namespace std;
// int  countZero(int n){
//     if(n==0){
//         return 1;
//     }
//     if(n<=9){
//         return 0;
//     }
//     int ans = countZero(n/10);
//     if(n%10==0){
//         return ans+1;
//     }
    
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<countZero(n)<<endl;
// }


/*
find sum
input 1,2,3,4
*/
#include<iostream>
using namespace std;
int Sum(int*arr,int n){
    if(n==0){
        return 0;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Sum(arr,n);
    return 0;
    delete[] arr;
}
