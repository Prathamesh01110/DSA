// https://codeforces.com/contest/1788/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  int  a ,e ,c;
  int s{0};
  int m{0};
  vector<int> v, q , n;
  int k;
  cin >> k;
  while(k--){
  cin >> a;
  while(a--) {
    cin >> e;
    v.push_back(e);
  }
  for(int i{0} ; i < v.size(); i++) {
    if(v[i] == 2) {
     m += 1;  
     n.push_back(i); 
    }
    else if(v[i]== 1){
      s += 1;
    }
  }
  if(s == v.size())
     q.push_back(1);
  else if(m == 0 || m%2 != 0) {
   q.push_back(-1);
  }
  else {
    q.push_back(n[m/2 - 1] + 1);
  } 
  v.clear();
  n.clear();
  m = 0;
  s = 0;
  }
  for(auto& r : q)
  cout << r << '\n';
  return 0;
}

// The logic of the code is designed to find Find out if an integer k
// exists so that the following conditions are met.1≤k≤n−1, and a1⋅a2⋅…⋅ak=ak+1⋅ak+2⋅…⋅an
// If there exist multiple k , that satisfy the given condition, print the smallest.
// Approach
// if no. of 2's in odd then directly -1, if no. of 1's is equal to v.size() then directly 1 , and if the no. 2's is even we had store the index of 2 in vector n so when n[m/2 - 1] + 1
