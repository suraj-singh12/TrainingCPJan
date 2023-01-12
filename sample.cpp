#include <bits/stdc++.h>
using namespace std;

#define ll            long long

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        
        if(n % 2 == 1) cout << "NO\n";
        else {
            unordered_map<char, ll> mpp;
            for(int i = 0; i < s.length(); ++i) {
                mpp[s[i]]++;
            }
            bool flag = true;
            for(auto x : mpp) {
                if(x.second % 2 != 0) {
                    cout << x.first << ":" << x.second << ":";
                    flag = 0;
                    break;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}