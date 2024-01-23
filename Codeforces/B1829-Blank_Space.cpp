//https://codeforces.com/problemset/problem/1829/B
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n{0};
    cin >> n;
    vector<int> v;
    vector<int> r;
 
    while (n--) {
        int x{0};
        cin >> x;
        
        for (int i = 0; i < x; i++) {
            int y{0};
            cin >> y;
            v.push_back(y);
        }
        int z{0};       int one{0};
        for (int i = 0; i < v.size(); i++) {
            if(v[i]==0){z++;}
            else if(v[i]==1){
                if(z>one){one=z;z=0;}
                else{z=0;}
            }
        }
        if (z >= one) {r.push_back(z);}
        else {r.push_back(one);}
        v.clear();
    }
    for (int &x : r) {cout << x << endl;}
    return 0;
}

// The logic of the code is designed to find the maximum consecutive count of zeros (z) in a sequence of integers, where the count is reset whenever a 1 is encountered. The maximum count of zeros encountered before each 1 is stored in a vector (r). The key steps in the logic are:
//The code uses one to store the maximum consecutive count of zeros in a sequence, and z is used to track the current consecutive count of zeros. When a 1 is encountered, the code compares z with the previous maximum one and updates one if z is larger. This process ensures that one stores the maximum count of consecutive zeros in the entire sequence.
// If the current element is 1, compare the current count z with the previous maximum count one. If z is greater, update one with the value of z.
// Reset the count z to 0 when a 1 is encountered.
// After processing the sequence, compare the final counts of z and one. Store the larger count in the result vector (r).