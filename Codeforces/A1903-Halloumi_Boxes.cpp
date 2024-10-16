// https://codeforces.com/contest/1903/problem/A

#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int t, n, k;
    cin >> t;
    bool sorted = true;
    while(t--) {
        cin >> n >> k;
        vector<int> v(n);
     
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
            
        if(k == 1) {
                sorted = true;
                for(int i = 0; i < n - 1; i++) {
                    if(v[i] > v[i + 1]) {
                        sorted = false;
                        break;
                    }
                }
                if(sorted) {
                    cout << "YES" << "\n";
                } else {
                    cout << "NO" << "\n";
                }
            }
     
            else {
                cout << "YES" << "\n";
            }
        }
     
        return 0;
    }

// Logic - If k == 1, only subarrays of length 1 can be reversed, so the array must already be sorted. For k >= 2, any subarray can be rearranged, making sorting always possible.