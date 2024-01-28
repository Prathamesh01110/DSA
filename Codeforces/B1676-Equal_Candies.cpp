//https://codeforces.com/contest/1676/problem/B
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v;
    vector<int> r;
    vector<int> result;
    while (t--)
    {
        int n;
        cin >> n;
 
        v.clear();
        result.clear();
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            v.push_back(value);
        }
        int c = v[0];
        for (int i = 0; i < v.size(); i++)
        {if (v[i] < c){c = v[i];}}
 
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            v[i] = v[i] - c;
            result.push_back(v[i]);
        }
 
        for (int i = 0; i < result.size(); i++)
        {
            ans = ans + result[i];
        }
        r.push_back(ans);
    }
 
    for (int &x : r)
    {
        cout << x << endl;
    }
    return 0;
}