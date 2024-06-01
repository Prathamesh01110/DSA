// https://codeforces.com/contest/71/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n{0};   cin>>n;
    vector <string>v;
    while(n--){
    string a;   cin >> a;
    int i{0};   int r{0}; string k; 
    i = a.length();    r = i - 2;
    if (i > 10){ k=a[0] + to_string(r) + a[i - 1];}
    else{k= a;}
    v.push_back(k);
    }
    for(auto &r:v){cout<<r<<"\n";}
    return 0;
}