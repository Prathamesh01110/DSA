//https://codeforces.com/contest/1899/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  int  a , b;
  vector<string> v;
  int k;
  cin >> k;
  while(k--){
  cin >> a ;
  for(int i{0}; i <= 10 ; i++){
    if(i%2 != 0){
      if((a-1)%3 == 0){
        v.push_back("Second");
        break;
      }
      else if((a+1)%3 == 0){
       v.push_back("Second");
       break;
      }
      else a+=1;
    }
    else {
      if((a+2)%3 == 0)
       a-=1;
      else 
       a+=1;
    }
 
  if(i == 10)
   v.push_back("First");
  }
  }
  for(auto& r : v)
  cout << r << '\n';
  return 0;
}