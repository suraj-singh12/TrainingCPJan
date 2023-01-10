#include <bits/stdc++.h>
using namespace std;

#define ll            long long

int main() {
    {
        int j = 0, n;
        cin >> n;
        vector<int> a(n);

        // TC: O(n)
        for(int i = 0; i < n; ++i, j++) {
            while(j < n && a[i] < a[j]) j++;
        }

    }

    {
        // TC: ?????   
        int count = 0;
        for(int i = N; i > 0; i = i / 2) {
            for(int j = 0; j < i; j++) {
                count += i;
            }
        }
        // Solution

        // 10
        // 0, -> n
        // 0 1 2 3 4 5 6 7 8 9 

        // 5
        // 0-> n / 2
        // 0 1 2 3 4 5
        // 2

        // 0 -> n / 4
        // 0 1 2

        // => n + n / 2 + n / 4 + n / 8 + ....
        // => Sn = a / r - 1 = n / (1/2 - 1) => 2n
        // TC: O(n) 

    }

    {
        // TC: ????
        int i, j, k = 0;
        for(i = n/2; i <= n; i++) {
            for(j = 2; j <= n; j *= 2)
                k += n/2;
        }

        // TC: nlogn
    }

    {
        // TC: ????
        
    }
    return 0;
}

