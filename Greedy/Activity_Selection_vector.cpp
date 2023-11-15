#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}

int MaxActivities(pair<int, int> arr[], int n)
{
    int prev = 0;
    int res = 1;
    for (int curr = 1; curr < n; curr++)
    {
        if (arr[curr].first >= arr[prev].second)
        {
            res++;
            prev = curr;
        }
    }
    return res;
}

int main()
{
    vector<pair<int, int>> pairs = {{1, 3}, {2, 4}, {3, 8}, {10, 11}};
    sort(pairs.begin(), pairs.end(), comp);
    for (auto p : pairs)
    {
        cout << "(" << p.first << " , " << p.second << ") ";
    }

    int res = MaxActivities(&pairs[0], pairs.size());
    cout << "\nMaximum Number of Activities: " << res;
    return 0;
}
