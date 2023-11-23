/*
1
22
333
4444
*/

#include <bits/stdc++.h>
using namespace std;

int pattern1(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern1(n);
}