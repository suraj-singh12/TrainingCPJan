#include <bits/stdc++.h>
using namespace std;
// largest sum continuous subArray

#define ll            long long
int kadane(vector<int> &v) {
    int localMaxSum = 0, globalMaxSum = 0;
    for(int i = 0; i < n; ++i) {
        localMaxSum += v[i];
        if(localMaxSum < 0) localMaxSum = 0;
        globalMaxSum = max(localMaxSum, globalMaxSum);
    }
    return globalMax;
}

int main() {
    return 0;
}