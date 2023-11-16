#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int count(int n)
{
    string s = to_string(n);
    return s.length();
}

int optimizes(int a)
{
    return log10(a) + 1;
}

int main()
{
    int n;
    int a;
    cin >> n;
    cin >> a;
    int res = count(n);
    int res2 = optimizes(a);
    cout << res;
    cout << res2;
}