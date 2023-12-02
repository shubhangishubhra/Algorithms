#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
    for (int i = min(n, m); i >= 0; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            return i;
            break;
        }
    }
}

int optimize(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return optimize(b, a % b);
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a;
    cin >> a;
    int b;
    cin >> b;
    int res = gcd(n, m);
    cout << res << endl;
    int o = optimize(a, b);
    cout << o << endl;
}