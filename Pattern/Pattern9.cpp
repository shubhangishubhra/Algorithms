
#include <bits/stdc++.h>
using namespace std;
void pattern9(int n)
{
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
    pattern9(n);
}