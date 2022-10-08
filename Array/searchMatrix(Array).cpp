/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom
*/
#include<iostream>
#include<vector>
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if(matrix.size()==0)
    return false;
    int n=matrix.size();
    int m=matrix[0].size();
    int i=0;
    int j=m-1;
    while(i<n && j>=0){
        if(matrix[i][j]==target){
            return true;
        }
        else if(matrix[i][j]<target){
            i++;
            
        }
        else{
            j--;
            
        }
    }
    return false;
}
int main(){
    
}
