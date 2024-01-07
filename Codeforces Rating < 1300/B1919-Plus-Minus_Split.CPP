//https://codeforces.com/contest/1919/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    while (n--)
    {
        int an = 0;
        int ab = 0;
        int ans = 0;
        int b;
        cin >> b;
        for (int i = 0; i < b; i++)
        {
            char a;
            cin >> a;
            if (a == '+')
            {
                an++;
            }
            else if (a == '-')
            {
                ab++;
            }
        }
        ans = an - ab;
        int positiveInt = abs(ans);
        v.push_back(positiveInt);
    }
    for(auto&r:v){
        cout<<r<<endl;
    }
    return 0;
}