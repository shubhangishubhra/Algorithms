#include <bits/stdc++.h>
#include <utility>
using namespace std;

void vectors()
{
    vector<int> v; // creates an empty container

    v.push_back(1);    // {1}
    v.emplace_back(2); // dynamically increases the size and puts 2 at the end {1,2}. Faster than push_back function

    vector<pair<int, int>> vec; // corrected the syntax
    vec.push_back({1, 2});      // using curly braces is a must
    vec.emplace_back(1, 2);     // automatically assumes it to be a pair

    vector<int> v3(5, 100); //(size, number) {100,100,100,100,100};
    vector<int> v4(5);      // {0,0,0,0,0}

    vector<int> v1(5, 100);
    vector<int> v2(v1); // copy vector

    vector<int>::iterator it = v.begin(); // v.begin points towards the memory
    it++;
    cout << *(it) << " "; //* is used to access the element

    it= it + 2;
    cout << *(it) << " ";

    vector<int>:: iterator it = v.end(); // v.end points beyond the array t-- then it will point towards last element
    vector<int>:: iterator it = v.rend();
    vector<int>:: iterator it = v.rbegin(); //moves in reverse

    cout << v[0] << " " << v.at(0);
    cout << v.back() <<" "; //begins from the end

    for (vector<int>:: iterator it = v.begin(); it != v.end() it++){ //print the entire vector
        cout << *(it) << " ";
    }
    for(auto it = v.begin(); it != v.end(); it++){ // shortcut to print vectors
cout << *(it) << " ";
    }

    for(auto it: v){ //using for each loop
        cout << it << " ";
    }

    //deletion 
    
}

int main()
{
    vectors();
    return 0;
}
