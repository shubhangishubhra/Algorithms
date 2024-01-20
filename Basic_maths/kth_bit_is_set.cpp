#include <iostream>
using namespace std;
#include <cmath>

int odd(int n)
{
    if ((n & 1) != 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    int res = odd(n);
    cout << res << endl;
}