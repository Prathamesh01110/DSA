//https://codeforces.com/contest/69/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n{0};
    cin >> n;
    int x{0};   int y{0};   int z{0};   int i{0};   int j{0};   int k{0};
    while (n--)
    {
        cin >> x >> y >> z;
        x = x + i;  y = y + j;  z = z + k;
        i = x;  j = y;  k = z;
    }
    if (x == 0 && y == 0 && z == 0)
    {cout << "YES";}
    else
    {cout << "NO";}
}