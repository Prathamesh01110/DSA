// https://codeforces.com/contest/1766/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ln "\n"
 
int main(){
    ll tc{0};
    cin >> tc;
    while(tc--){
    ll n{0};   cin >> n;
    int a{0};
	if(n < 10) cout << n << ln;
	else{
			int ans = 9, j;
			for(int i = 10, j = 1; i <= n; ++j){
				int k = i * j;
				if(k > n) break;
				++ans;
				if(j == 10){
					j = 1;
					i = i * 10;
				}
			}
			cout << ans << ln;
        }
    }
}

// logic - if >9 go in loop where at every 10 iteration of i, j becomes 1 and the pattern of only 1 to 9 with trailing zero only is present ex. 4000... not if 140..coz after 1 digit is should be zero recurring 