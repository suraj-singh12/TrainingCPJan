#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> primeNums;
void sieve(ll n) {
    vector<bool> prime(n + 1, true);
    for(ll p = 2; p * p <= n; ++p)
        if(prime[p]) 
            //all multiples of p, are not prime, so set them false
            for(ll i = p * p; i <= n; i += p) 
                prime[i] = false;
    
    for(ll p = 2; p <= n; ++p)
        if(prime[p]) primeNums.push_back(p);

    return;
}

int main() {
    ll n;
    cin >> n;
    sieve(n);   
    for(auto x : primeNums) cout << x << " ";
    return 0;
}

