#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  vector<long long> v, w , z;
  long long n , b;
  cin >> n;
  if(n == 2 || n == 3) {
    cout << "NO SOLUTION";
    return 0;
  }
  else if (n == 4) {
    cout << "2 4 1 3";
    return 0;
  }
  b = n;
  while(b>0) {
    if(b > n/2) {
    v.push_back(b);
    } 
    else {
     w.push_back(b); 
    }
    b--;
  }
  for(int i{0} ; i < n/2 ; i++) {
    z.push_back(v[i]);
    z.push_back(w[i]);
  }
  if(n%2 != 0) {
    z.push_back(v[v.size() - 1]);
  }
  for(auto& m : z) {
    cout << m << " ";
  }
  return 0;
}