/*
0(n)*/
#include <iostream>
#include <vector>

using namespace std;

int isSorted(int n, vector<int> a)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[i - 1])
            return 0;
    }
    return 1;
}

int main()
{
    vector<int> a = {3, 2, 4, 5};
    int n = a.size();
    int largest = isSorted(n, a);
    cout << largest << endl;
    return 0;
}
