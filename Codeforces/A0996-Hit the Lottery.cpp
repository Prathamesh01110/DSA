// https://codeforces.com/problemset/problem/996/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int denominations[] = {100, 20, 10, 5, 1};
    int numBills = 0;
    for (int i = 0; i < 5; ++i) {
        numBills += n / denominations[i];
        n %= denominations[i];
    }
    cout << numBills << endl;
 
    return 0;
}

// Apporach
// Given:
// n = 342
// denominations[] = {100, 20, 10, 5, 1}
// Iteration 1:
// Denomination: $100
// Calculate how many $100 bills can be used: 342 / 100 = 3
// Update numBills: numBills += 3 (now numBills = 3)
// Update n: n %= 100 (now n = 42)
// Iteration 2:
// Denomination: $20
// Calculate how many $20 bills can be used: 42 / 20 = 2
// Update numBills: numBills += 2 (now numBills = 5)
// Update n: n %= 20 (now n = 2)
// Iteration 3:
// Denomination: $10
// Calculate how many $10 bills can be used: 2 / 10 = 0
// Update numBills: numBills += 0 (no change)
// Update n: n %= 10 (now n = 2)
// Iteration 4:
// Denomination: $5
// Calculate how many $5 bills can be used: 2 / 5 = 0
// Update numBills: numBills += 0 (no change)
// Update n: n %= 5 (now n = 2)
// Iteration 5:
// Denomination: $1
// Calculate how many $1 bills can be used: 2 / 1 = 2
// Update numBills: numBills += 2 (now numBills = 7)
// Update n: n %= 1 (now n = 0)