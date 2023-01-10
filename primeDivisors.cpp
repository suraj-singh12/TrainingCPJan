#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printPrimeFactors(ll n) {
    if(n % 2 == 0) {
        while(n % 2 == 0) n /= 2;
        cout << 2 << " ";
    }
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) {
            while(n % i == 0) n /= i;
            cout << i << " ";
        }
    }
    if(n > 1) cout << n;
    cout << endl;
}
int main() {
    ll n;
    cin >> n;
    printPrimeFactors(n);
}