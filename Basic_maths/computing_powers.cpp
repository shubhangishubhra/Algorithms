#include <iostream>
#include <cmath>

int naive(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
        res = res * x;
    return res;
}
int power(int x, int n)
{
    if (n == 0)
        return 1;

    int temp = power(x, n / 2);

    temp = temp * temp;

    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}
int main()
{
    int x;
    int n;
    std::cin >> x;
    std::cin >> n;

    int ress = naive(x, n);
    int t = power(x, n);

    std::cout << ress << std::endl;
    std::cout << t << std::endl;

    return 0;
}
