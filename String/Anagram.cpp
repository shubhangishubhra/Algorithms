#include <bits/stdc++.h>
#include <string>
using namespace std;

bool areAnagrams(string A, string B)
{
    if (A.length() != B.length())
    {
        return false;
    }
    int hashA[26] = {0}, hashB[26] = {0};
    for (unsigned int i = 0; i < A.length(); i++)
    {
        hashA[A[i] - 'a']++;
        hashB[B[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (hashA[i] != hashB[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string A = "app";
    string B = "pap";
    bool res = areAnagrams(A, B); // Removed the type declarations here
    cout << res << endl;
    return 0; // Added a return statement
}
