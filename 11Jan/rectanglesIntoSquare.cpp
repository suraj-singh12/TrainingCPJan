#include <bits/stdc++.h>
using namespace std;

#define ll            long long

bool good(ll len, ll n, ll w, ll h) {
    if((len/w) * (len/h) >= n) return true;
    else return false;
}
int main() {
    ll n, w, h;
    cin >> n >> w >> h;
    ll s = 0;
    ll e = n * max(w, h);

    while(e-s > 1) {
        ll mid = s + (e-s) /2;
        if(good(mid, n, w, h)) e = mid;
        else s = mid;
    }
    cout << e << endl;
    return 0;
}
/*
3 
2 1

------------ 
[  1*2 ]
[  1*2 ]
[  1*2 ]
------------
box of 3 * 3

ans: 3
*/