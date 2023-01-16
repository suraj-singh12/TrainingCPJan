#include <bits/stdc++.h>
using namespace std;

#define ll            long long


void bubbleSort(vector<ll> &v) {
    ll n = v.size();
    ll ctr = 0;
    for(int i = 0; i < n -1; ++i) {
        for(int j = 0; j < n -i-1; j++)
            if(v[j] > v[j + 1]) {
                swap(v[j], v[j +1]);
                ctr++;
            }
    }
    cout << "total swaps: " << ctr << endl; 
}
int main() {
    vector<ll> v {32,5,1,54,754,2,65,2,5476,345};
    bubbleSort(v);
    for(auto x : v) cout << x << " ";
    return 0;
}

