//https://codeforces.com/contest/1873/problem/C
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> v;
    while (n--) {
        char grid[10][10];
        int ans = 0;
        
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
                if (grid[i][j] == 'X') {
                    if (i == 0 || i == 9 || j == 0 || j == 9) {
                        ans = ans + 1;
                    } else if (i == 1 || i == 8 || j == 1 || j == 8) {
                        ans = ans + 2;
                    } else if (i == 2 || i == 7 || j == 2 || j == 7) {
                        ans = ans + 3;
                    } else if (i == 3 || i == 6 || j == 3 || j == 6) {
                        ans = ans + 4;
                    } else if (i == 4 || i == 5 || j == 4 || j == 5) {
                        ans = ans + 5;
                    }
                }
            }
        }
        v.push_back(ans);
    }
    for(int &x:v){cout<<x<<endl;}
    return 0;
}