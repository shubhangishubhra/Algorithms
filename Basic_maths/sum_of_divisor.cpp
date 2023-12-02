#include <iostream>
using namespace std;
int sumOfAllDivisors(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i * (n / i);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int res = sumOfAllDivisors(n);
    cout << res << endl;
    return 0;
}
