//https://codeforces.com/contest/271/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string a;
    cin>>a;
    int u = stoi(a);
    u=u+1;
    string b;
    b = to_string(u);
    
    int num{0};
    bool ans=true;
    while(ans){
        int num = stoi(b);
        if(b[0]!=b[1]&&b[0]!=b[2]&&b[0]!=b[3]&&b[0]!=b[4]&&
        b[1]!=b[2]&&b[1]!=b[3]&&b[1]!=b[4]&&
        b[2]!=b[3]&&b[2]!=b[3]&&
        b[3]!=b[4]){
            cout<<num;
            break;
        }
       num++;
       b = to_string(num);
    }
 
return 0;
}