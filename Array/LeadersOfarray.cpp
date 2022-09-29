// Write a program to print all the LEADERS in the array.
// An element is a leader if it is greater than all the elements to its right side.
// And the rightmost element is always a leader. 
#include<iostream>
using namespace std;
void printLeaders(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i+1; j < n; j++)
        {
            if (ans[i] <=ans[j])
                break;
        }   
        if (j == n)
            cout << ans[i] << " ";
  }
}
 
int main()
{
    int ans[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(ans)/sizeof(ans[0]);
    printLeaders(ans, n);
    return 0;
}