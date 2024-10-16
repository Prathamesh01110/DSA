// https://codeforces.com/contest/2025/problem/A

    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        while(n--){
            string s1 ,s2;
            cin>>s1;
            cin>>s2;
            int a1, a2,count{0};
            a1 = s1.size();
            a2 = s2.size();
            for(int i = 0; i<s2.size();i++){
                if(s2[i]==s1[i]){
                    count++;
                }
                else{
                    break;
                }
            }
            int ans{0};
            if(count){
            ans = a1 + (a2 - count) + 1 ;
            cout<<ans<<endl;
            }
            else{
            ans =  a1 + a2;
            cout<<ans<<endl;
            }
        }
        return 0;
    }


// Logic - If the starting string is a substring repeated in the second string, count the number of occurrences of the first string in the second string. Subtract this count from the length of the second string, then add 1. Otherwise, add the length of two string