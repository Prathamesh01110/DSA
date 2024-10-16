//https://codeforces.com/contest/59/problem/A
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int r{0};
    int s{0};
    for (int i = 0; i < a.length(); i++)
    {
        if (isupper(a[i]))
        {r += 1;}
        else
        {s += 1;}
    }
    if (r > s)
    {
        for (char &c : a)
        {c = toupper(c);}
        cout << a << endl;
    }
    else if (r < s)
    {
        for (char &c : a)
        {c = tolower(c);}
        cout << a << endl;
    }
    else
    {
        for (char &c : a)
        {c = tolower(c);}
        cout << a << endl;
    }
    return 0;
}