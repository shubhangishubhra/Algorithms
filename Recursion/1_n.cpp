#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &ans, int n)
{
    if (n == 0)
        return;
    solve(ans, n - 1);
    ans.push_back(n);
}

vector<int> printNos(int x)
{
    vector<int> ans;
    solve(ans, x);
    return ans;
}

int main()
{
    vector<int> result = printNos(5);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
