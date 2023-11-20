#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    sort(a.begin(), a.end());
    return {a[n - 2], a[1]};
}

int main()
{
    vector<vector<int>> a = {{3, 2, 4, 5}, {8, 1, 6, 10}, {7, 9, 3, 2}};

    for (int i = 0; i < a.size(); ++i)
    {
        vector<int> result = getSecondOrderElements(a[i].size(), a[i]);
        cout << "For vector " << i + 1 << ":" << endl;
        cout << "Second Smallest: " << result[0] << endl;
        cout << "Second Largest: " << result[1] << endl;
    }

    return 0;
}
