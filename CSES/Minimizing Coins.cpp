// https://cses.fi/problemset/task/1634

#include <bits/stdc++.h>
using namespace std;
 
int solve(long int sum, vector<int> &Coins) {
    int n = Coins.size();
    vector<int> dp(sum + 1, INT_MAX);
    dp[0] = 0;
 
    for (int i = 1; i <= sum; i++) {
        for (int j = 0; j < n; j++) {
            if (Coins[j] <= i && dp[i - Coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], 1 + dp[i - Coins[j]]);
            }
        }
    }
    
    return dp[sum] == INT_MAX ? -1 : dp[sum];
}
 
int main() {
    int n{0};
    long int sum{0};
    cin >> n >> sum;
 
    vector<int> Coins(n);
    for (int i = 0; i < n; i++) {
        cin >> Coins[i];
    }
 
    int Answer = solve(sum, Coins);
    cout << Answer;
    return 0;
}