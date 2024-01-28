#include <bits/stdc++.h>
using namespace std;
int main() {
  string a {};
  long long best{0};
  long long sum{1} ;
  cin >> a;
  for(int i{0} ; i < a.length() ; i++){
      if(a[i+1] == a[i]) {
        sum += 1;
      }
      else {
        sum = 1;
      }
      if(sum > best){
        best = sum ;
      }
  }
  cout << best;
    return 0;
}