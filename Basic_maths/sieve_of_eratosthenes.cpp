
#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

void sieve(int n)
{
    if (n <= 1)
        return;

    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
            cout << i << " ";
    }
}

int main()
{
    int n = 18;
    sieve(n);

    return 0; // Add a return statement for main
}
