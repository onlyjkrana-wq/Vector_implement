#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    string s;

    while (getline(cin, s))
    {
        v.push_back(s);
    }
    for( string a : v)
    {
        cout << a << endl;
    }
    return 0;
}