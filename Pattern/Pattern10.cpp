/*
if n=3

 *
 * *
 * * *
 * *
 *
 *
*/
// symmetrical portion
// 1 [1 stars]
// 2 [2stars]
// 3 [3stars]
// 4 [4stars]
// 5 [stars]
// reverse
// 6 - 4 stars
// 7 - 3 stars
// 8 - 2 stars
// 9 - 1 star (2n-i)
#include <bits/stdc++.h>
using namespace std;
int pattern1(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
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