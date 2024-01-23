//https://codeforces.com/contest/1921/problem/B
//Scientists need to test a cat-related hypothesis by arranging cats in boxes. Given the initial state of boxes and the desired state, they can add, remove, or move cats each day. What is the minimum number of days needed to achieve the desired arrangement for a given test case
#include <bits/stdc++.h>
using namespace std;
vector<int> r;
int main(){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;cin >> n;
        string a,b;cin >> a >> b;
        int x=0,y=0;
        for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(b[i]=='0'){x++;}
            else{y++;}
        }}
        int k=min(x,y)+abs(x-y);
        r.push_back(k);
    }
    for(int &x:r){cout << x << endl;}
}

// logic - like when b is 0 and a is 1 then inc x else inc y and then get min of x,y add mode of x-y so we get the min no. of operation reason for this expression is b0 and a1 is where we can shift a1 to other in b so subtracting it from a0 and b1