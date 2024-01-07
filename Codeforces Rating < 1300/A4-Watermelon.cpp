//https://codeforces.com/contest/4/problem/A
#include <iostream>
 
int main() {
int a{ 0 };
 
std::cin >> a;
 
if (a ==2 || (a % 2) != 0)
std::cout << "NO";
else
std::cout << "YES";
 
return 0;
}