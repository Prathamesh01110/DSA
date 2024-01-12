// https://codeforces.com/contest/1866/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n{0};
    cin >> n;
    vector<int> v;
    while(n--){
        int a{0};
        cin>>a;
        v.push_back(abs(a));
    }
    sort(v.begin(),v.end());
    int ans=v[0];
    cout << ans;
}