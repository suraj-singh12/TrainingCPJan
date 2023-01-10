// find lcm of all the elements of given array
#include <bits/stdc++.h>
using namespace std;

#define ll            long long

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}
int lcmOf(int a, int b) {
    return (a * b) / gcd(a, b);
}


int solve2(vector<int> a) {
    map<int, int> mp;
    for(int i = 0; i < a.size(); i++) {
        int x = a[i];
        // finding prime factors of current number x
        // TC: O(largest prime element in the array)
        for(int j = 2; j <= x; j++) {
            if(x % j == 0) {
                int cnt = 0;
                while(x % j == 0) {
                    x /= j;
                    cnt++;
                }
                // for every prime factor found, save n^m in n : m format , eg. 2 ^ 5 as 2 : 5 
                // every time update the n with maximum m that any number has!
                mp[j] = max(mp[j], cnt);
            }
        }
    }

    int lcm = 1;
    for(auto it : mp) {
        int x = it.first;       // x is prime no        
        int y = it.second;      // y referring to max freq of prime no x
        for(int j = 0; j < y; j++)
            lcm *= x;
    }
    return lcm;
}




int main() {
    vector<int> v {24, 28, 30, 32, 18};
    // vector<int> v {32, 84, }
    // vector<int> v {2, 3};
    // int lcm = v[0];
    // for(int i = 1; i < v.size(); ++i) {
    //     lcm = lcmOf(v[i], lcm);
    // }
    // cout << lcm << endl;
    cout << solve2(v);
    
    return 0;
}