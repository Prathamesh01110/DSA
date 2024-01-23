// https://codeforces.com/contest/1921/problem/A
// A square of positive (strictly greater than 0) area is located on the coordinate plane, with sides parallel to the coordinate axes. You are given the coordinates of its corners, in random order. Your task is to find the area of the square.
#include <bits/stdc++.h>
using namespace std;
vector<int> r;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        int side_length = max({abs(x1 - x2), abs(y1 - y3), abs(x2 - x4), abs(y3 - y4)});
        int area = side_length * side_length;
        r.push_back(area);
    }
for(int &x:r){cout<<x<<endl;}
    return 0;
}