/*  *
 ***
 *****
 */

#include <bits/stdc++.h>
using namespace std;
void pattern7(int n)
{
    // 9 columns are there when there are 4 rows space,stars,space
    // 0 [4,1,4]
    // 1 [3,3,3]
    // 2 [2,5,2]
    // 3 [1,7,1]
    // 4 [0,9,0]
    // space n-i-1
    // stars (2*i+1)
    for (int i = 0; i < n; i++) // no of rows is same as n
    {
        // inner loop 1 space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // inner loop 2 star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // inner loop 3 space
        for (int j = 0; j < n - i - 1; j++)
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
    pattern7(n);
}