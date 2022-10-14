/*
Given two strings text1 and text2, return the length of their longest common subsequence.
If there is no common subsequence, return 0
*/



#include<iostream>
using namespace std;
#include<vector>
int Lcs(int i,int j,string &s1,string &s2,vector<vector<int>> &dp){
    if(i < 0 or j < 0)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(s1[i] == s2[j])
    return dp[i][j] = Lcs(i-1,j-1,s1,s2,dp) + 1;
    else
    return dp[i][j] = max(Lcs(i-1,j,s1,s2,dp),Lcs(i,j-1,s1,s2,dp));
}
int longestCommonSubsequence(string text1, string text2) {
    int i = text1.size();
    int j = text2.size();
    vector<vector<int>> dp(i+1,vector<int> (j+1,-1));
    Lcs(i,j,text1,text2,dp);
    return dp[i-1][j-1];
}

int main(){
    
}
