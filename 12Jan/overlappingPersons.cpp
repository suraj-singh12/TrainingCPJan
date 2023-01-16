#include <bits/stdc++.h>
using namespace std;

#define ll            long long

bool good(double t, int x[], int v[], int n) {
    double l_max = -1.0 * 1e9;
    double r_min = (double)1.0 * 1e9;
    for(int i = 0; i < n; ++i) {
        l_max = max(l_max, 1.0 * x[i] - v[i] * t);
        r_min = min(r_min, 1.0 * x[i] + v[i] * t);
    }

    // -------------> lmax
        //  rmin<-------------------
    return (r_min >= l_max);
}
int main() {
    int n;
    cin >> n;
    int x[n], v[n];  // x[i] is pos of ith person, and v[i] is speed of ith person
    for(int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    double l = 0.0;
    double r = (double)1.0 * 1e9;
    for(int i = 0; i < 50; ++i) {
        double mid = (l + r) / 2;
        if(good(mid, x, v, n)) 
            r = mid;
        else l = mid;
    }
    cout << r << endl;
    return 0;
}