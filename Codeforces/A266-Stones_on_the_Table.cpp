//https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n{0};
    cin>>n;
    int ans{0};
    string a;
    cin>>a;
    while(--n){
        if(a[n]==a[n-1]){
            ans++;
        }
    }
  cout<<ans;
return 0;
}