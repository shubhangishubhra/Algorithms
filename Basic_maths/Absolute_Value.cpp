#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int absolute(int I)
{
    return abs(I); //abs function returns absolute value
}

int main()
{
    int I = -302;
    int res = absolute(I);
    cout << res << endl;
}