//https://codeforces.com/contest/231/problem/A
#include <iostream>
using namespace std;
int main(){
    int n{};
    cin >> n;
    int arr[3];
    int ok{};
    for (int i = 0; i < n; i++){
        cin >> arr[0] >> arr[1] >> arr[2];
       if (arr[0] + arr[1] + arr[2] >= 2){
        ok++;
       }
    }
    cout<<ok;
}