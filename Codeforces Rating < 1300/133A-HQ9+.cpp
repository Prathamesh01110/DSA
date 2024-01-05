//https://codeforces.com/contest/133/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b{0};
    bool ans=false;
    b=a.length();
while(b--){
    if(a[b]=='H'||a[b]=='Q'||a[b]=='9') ans=true;
}
if(ans) cout<<"YES";
else cout<<"NO";
return 0;
}