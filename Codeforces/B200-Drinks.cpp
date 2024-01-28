//https://codeforces.com/contest/200/problem/B
#include <bits/stdc++.h>
using namespace std;
int main(){
    long double n{0};
    cin>>n;
    long double k{0};
    k=n;
    long double a{0};
    long double b{0};
    while(n--){
        cin>>a;
        a=a+b;
        b=a;
    }
long double ans{0};
ans= a/k;
cout<<ans;
return 0;
}