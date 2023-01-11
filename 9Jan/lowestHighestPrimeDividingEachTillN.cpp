// find the lowest and highest prime divisor for each number till n
// TC: O(nloglogn)
#include <bits/stdc++.h>
using namespace std;

#define ll            long long

int main() {
    int n;
    cin >> n;

    // let maxN = 12
    // using sieve (modified) : O(nloglogn same TC)
    vector<int> isPrime(n, 1); 
    vector<int> lp (n, 0);       // lowest prime (stores the lowest prime factor that divides ith number)
    vector<int> hp (n, 0);       // highest prime    (stores the highest prime factors that divides ith number)

    for(int i= 2; i < n; ++i) {
        if(!isPrime[i]) continue;       // don't divide by a composite!
        // for every prime that enters
        lp[i] = i;      // 2
        hp[i] = i;
        for(int j = 2 * i; j < n; j += i) {      // 2 3 5 7 11, rest all get cut down 
            isPrime[j] = 0;
            if(lp[j] == 0) lp[j] = i;       // 2 3 4 5 6 7 8 9 10 11 12
                                            // 2 3 2 5 2 7 2 3 2  11 2
            hp[j] = i;                      // 2 3 2 5 3 7 2 3 5  11 2
        }
    }

    for(int i = 2; i < n; ++i) cout << lp[i] << " " << hp[i] << endl;
    return 0;
}