#include <bits/stdc++.h>
using namespace std;

int rev(int n)
{
    int revnum = 0;
    int ld;
    while (n > 0)
    {
        ld = n % 10;
        n = n / 10;
        revnum = (revnum * 10) + ld;
    }
}
int main()
{
    int n;
    cin >> n;
    int res = rev(n);
    cout << res << endl;
}