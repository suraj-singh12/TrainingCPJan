#include <bits/stdc++.h>
using namespace std;

#define ll            long long


// TC: O(logn)
int main() {
    ll n;
    cin >> n;

    // y <= sqrt(x)
    // y * y <= x   ->   y * y > x
    double  l = 0.0;
    double r = (double)(n + 1) * 1.0;

    for(int i = 0; i < 100; ++i) {
        double mid = (l + r) / 2.0;
        cout << l << " " << h << endl;  // dry run let n = 13
        if(mid * mid <= n) l = mid;
        else r = mid;
    }
    cout << l << endl;
    return 0;
}