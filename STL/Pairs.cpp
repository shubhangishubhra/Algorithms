#include <bits/stdc++.h>
#include <utility>
using namespace std;

void Pairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> pp = {1, {1, 2}};
    cout << pp.first << " " << pp.second.first << " " << pp.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 3}, {4, 5}};
    cout << arr[1].second << endl;
}

int main()
{
    Pairs();
    return 0;
}
