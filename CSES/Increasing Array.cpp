#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  vector<long long> v{};
  long long n, b, r;
  long long c{0};
  cin >> n;
  b = n;
  while(b> 0) {
    cin >> r;
    v.push_back(r);
    b--;
  }
  for(int i{0}; i< n-1 ; i++) {
    if(v[i+1] < v[i]) {
      c += v[i] - v[i+1];
      v[i+1] = v[i];
    }
  }
  cout << c;
  return 0;
}