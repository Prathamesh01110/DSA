// https://codeforces.com/contest/339/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b{0};
    cin >> a;
    b = a.length();
    vector<int> v;
    for (int i = 0; i < b; i += 2)
    {
        v.push_back(a[i] - '0');
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i < v.size() - 1)
        {
            cout << "+";
        }
    }
}
