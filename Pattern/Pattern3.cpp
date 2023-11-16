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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
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