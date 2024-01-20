#include <iostream>
using namespace std;

int trail(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;

    int zero = 0;
    while (res % 10 == 0)
    {
        zero++;
        res = res / 10;
    }
    return zero;
}

int optimize(int a)
{
    int res = 0;
    for (int i = 5; i <= a; i = i * 5)
        res = res + a / i;
    return res;
}

int main()
{
    int n;
    cin >> n;
    int r = trail(n);
    cout << r << endl;
    int a;
    cin >> a;
    int ri = optimize(n);
    cout << ri << endl;
}