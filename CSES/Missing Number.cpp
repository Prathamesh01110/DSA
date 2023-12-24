#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a {};
  int b{0};
  int n , r ;
  cin >> n;
  r = n;
  while(r>1){
    cin >> b;
    a.push_back(b);
    r--;
  }
  sort(a.begin(),a.end());
for(int i{0} ; i <= n ; i++){
      if(a[i] != i+1) {
        cout << i + 1;
        break;
      }
  }
    return 0;
}