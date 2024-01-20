#include <iostream>
using namespace std;

int lcm(int n, int m)
{
    for (int i = max(n, m); i >= 0; i++)
    {
        if (i % n == 0 && i % m == 0)
        {
            return i;
        }
    }
}

int euclidean(int a, int b)
{
    if (b == 0)
        return a;
    return euclidean(b, a % b);
}

int optimized_lcm(int a, int b)
{
    return (a * b) / euclidean(a, b);
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int res = lcm(n, m);
    cout << res << endl;
    int a;
    cin >> a;
    int b;
    cin >> b;
    int r = optimized_lcm(n, m);
    cout << r << endl;
    return 0;
}
