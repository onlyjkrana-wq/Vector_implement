#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    
    // read values into the vector
    while (cin >> n)
    {
        v.push_back(n);
    }

    // output values from the vector
    for (int x : v)
    {
        cout << x << endl;
    }
    return 0;
}