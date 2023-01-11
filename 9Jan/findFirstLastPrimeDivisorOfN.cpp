#include <bits/stdc++.h>
using namespace std;

#define ll            long long
// Code TC: O(sqrt(n))

// TC: sqrt(n)
vector<ll> generatePrimeFactors(ll n) {
    vector<ll> ans;
    if(n % 2 == 0) {
        while(n % 2 == 0) n /= 2;
        ans.push_back(2);
    }
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) {
            while(n % i == 0) n /= i;
            ans.push_back(i);
        }
    }
    if(n > 1) ans.push_back(n);
    return ans;
}

vector<ll> giveFirstLastPrimeDivisor(ll n) {
    // appraoch1        O(sqrt(n))
    // vector<ll> primeFactors = generatePrimeFactors(n);
    // return vector<ll> {primeFactors[0], primeFactors.back()};   

    // approach2    using sieve
}
int main() {
    ll n;
    cin >> n;
    auto ans = giveFirstLastPrimeDivisor(n);    
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}