#include <iostream>
#include <cmath>
using namespace std;

int MinCoins(int coins[], int amount, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int c = floor(amount / coins[i]);
        if (coins[i] < amount)
        {
            res = res + c;
            amount = amount - c * coins[i];
        }
        if (amount == 0)
            break;
    }
    return res;
}

int main()
{
    int coins[] = {10, 5, 2, 1};
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    int res = MinCoins(coins, amount, n);
    cout << "Minimum coins needed: " << res << endl;

    return 0;
}
