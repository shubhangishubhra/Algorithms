/*
1
12
123
1234

 */

#include <bits/stdc++.h>
using namespace std;

int pattern1(int n)
{
    for (int i = 1; i < n + 1; i++)

    {

        for (int j = 1; j <= n - i + 1; j++)

        {

            cout << j << " ";
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