#include <bits/stdc++.h>
using namespace std;

#define ll            long long
void selectionSort(vector<int> &a) {
    int n = a.size();
    for(int i = 0; i < n -1; ++i) {     // i goes 0 -> n-1
        int i_min = i;
        for(int j = i+1; j < n; ++j) {   // j goes i+1 -> n
            if(a[j] < a[i_min]) {
                i_min = j;
            }
        }
        swap(a[i], a[i_min]);
    }
}
int main() {
    vector<int> v {32,3,6534,32,4534,5,3,455,345635,2};
    selectionSort(v);
    for(auto x : v) cout << x << " ";
    return 0;
}