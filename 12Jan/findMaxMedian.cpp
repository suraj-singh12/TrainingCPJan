#include <bits/stdc++.h>
using namespace std;

#define ll            long long

bool good(ll med, ll a[], ll n, ll k) {
    int cur =  0;
    // find the total no of operations required to be done
    // to make the median as med
    for(int i = n/2; i < n; ++i) {
        if(a[i] < med) cur += med - a[i];
    }
    // if no of ops <= k then yes, it is possible else not
    return (cur <= k);
}
int main() {
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    ll a[n];
    for(ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);

    ll l = a[n/2];
    ll r = a[n-1] + k + 1;
    while(r - l > 1) {
        ll mid = (l + r) / 2;       // check if mid can be made a median
        if(good(mid, a, n, k)) l = mid;
        else r = mid;
    }
    cout << l << endl;
    
    return 0;
}