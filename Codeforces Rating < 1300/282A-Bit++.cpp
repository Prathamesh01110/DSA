//https://codeforces.com/contest/282/problem/A
#include <iostream>
#include <string>
 
int main() {
 int a {0};
 int n {0};
 std::string b{"error"};
 
 std::cin >> n;
 
 while (n>0) {
      std::cin >> b;
 
      if ( b == "++X" || b == "X++" || b == "++x" || b== "x++") 
         a +=1;
     else if ( b == "--X" || b == "X--" || b == "--x" || b== "x--") 
         a-=1;
 
        n--;
  }
 
 std::cout<< a;
 
 return 0;
 
}