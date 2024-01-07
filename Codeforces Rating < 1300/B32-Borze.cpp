//https://codeforces.com/contest/32/problem/B
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0;i<=a.length();i++){
        if(a[i]=='.'){
            cout<<0;
        }
        else{
            if (a.substr(i, 2) == "-."){
                cout<<1;
                i=i+1;
            }
           if (a.substr(i, 2) == "--"){
                cout<<2;
                i=i+1;
            }
        }
    }
}