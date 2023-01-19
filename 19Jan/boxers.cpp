// https://codeforces.com/contest/1203/problem/E
#include <bits/stdc++.h>
using namespace std;

#define ll            long long

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll last  = 1e8;
    sort(a, a + n);
    ll j = n - 1;
    ll cnt = 0;
    while(j >= 0) {
        if(a[j] + 1 < last) {
            last = a[j] + 1;
            cnt++;
        } else if(a[j] < last) {
            last = a[j];
            cnt++;
        } else if(a[j] - 1 > 0 && a[j] - 1 < last) {
            last = a[j] - 1;
            cnt++;
        }
        j--;
    }
    cout << cnt << endl;
    return 0;
}

// eg test case:
/*
4
1 3 2 4


*/