#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n)
{
    int dup = n;
    int digit = log10(n) + 1;
    int sum = 0;
    while (n != 0)
    {
        sum += pow(n % 10, digit);
        n /= 10;
    }
    return sum == dup;
}
int main()
{
    int n;
    cin >> n;
    int res = armstrong(n);
    cout << res << endl;
}