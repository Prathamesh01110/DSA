//Question Link https://cses.fi/problemset/task/1634/

//getting wrongn answer dont know why
//and also needed the explaination of the code 

#include <bits/stdc++.h> 
using namespace std;
int minValue(int n, const vector<int>& Coins) {
    // Base case:
    if (n == 0) {
        return 0;
    }

    // memoization table
    unordered_map<int, int> memo;

    // lambda function
    function<int(int)> minAnswer = [&](int amount) {
        // Base case:
        if (amount == 0) {
            return 0;
        }

        // memoized or not
        if (memo.find(amount) != memo.end()) {
            return memo[amount];
        }          

        int Totalcalls = INT_MAX ;
        
        for (int coin : Coins) {
            if (coin <= amount) {
                int currcall = 1 + minAnswer(amount - coin);
                Totalcalls = min(Totalcalls, currcall);
            }
        }

        // Memoize the result
        memo[amount] = Totalcalls;
        return Totalcalls;
    };
    return minAnswer(n);
}

int main() {
    int n;
    cin >> n;

    int Sum;
    cin >> Sum;
    vector<int> Coins;
    for (int i = 0; i < n-1; i++) {
        int coin;
        cin >> coin;
        Coins.push_back(coin);
    }

    int Count = minValue(Sum, Coins);
    cout << Count << endl;

    return 0;
}
