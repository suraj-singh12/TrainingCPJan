#include <bits/stdc++.h>
using namespace std;

#define ll            long long


bool binarySearch(int l, int r, int x, int a[]) {
    if(l > r) return false;
    int mid = (l + r) / 2;
    if(a[mid] == x) 
        return true;
    else if(a[mid] < x)
        return binarySearch(mid +1, r, x, a); 
    return binarySearch(l, mid -1, x, a);
}

int main() {
    ll n;
    cin >> n;
    int a[n];
    for(int i= 0; i < n; ++i) {
        cin >> a[i];
    }
    ll target;
    cin >> target;
    cout << (binarySearch(0, n- 1, target, a) ? "Element Found\n" : "Element Not Found\n");
    return 0;
}