/* check palindrome or not,
T.C coding o/p 0(false), abcdcba o/p 1(true)
*/
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
bool palindrome(char ans[])
{
    int len = strlen(ans);
    int i = 0, j = len - 1;
    while (i < j)
    {
        if (ans[i] != ans[j])  
            return false;
        else
            i++;
        j--;
    }
    return true;
}
int main()
{
    char ans[100];
    cin.getline(ans, 100);
    cout << (ans);
    cout << palindrome(ans) ? "true" : "false";
}
