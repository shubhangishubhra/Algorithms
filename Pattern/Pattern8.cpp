/*  reverse pyrammid
****
s**
s*
 */

#include <bits/stdc++.h>
using namespace std;
void pattern8(int n)
{
    // 0 [0,9,0]
// 1 [1,7,1]
//2 [2,5,2]
//3 [3,3,3]
// 4 [4,1,4]
    // space n-i-1
    // stars (2*i+1)
    for (int i = 0; i < n; i++) // no of rows is same as n
    {
        // inner loop 1 space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // inner loop 2 star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // inner loop 3 space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern8(n);
}