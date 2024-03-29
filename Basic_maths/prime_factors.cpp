#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void primefactor(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            while (n % i == 0)
            {
                cout << i << endl;
                n /= i;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    primefactor(n);
    return 0;
}
