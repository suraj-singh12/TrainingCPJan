// Finding the first and last occurrence of an element in a sorted array

#include <bits/stdc++.h>
using namespace std;

#define ll            long long

int findFirstOccurrence(vector<int> &v, int target) {
    int start = 0, end = v.size() -1;
    int firstOcc = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(v[mid] == target) {
            firstOcc = mid;
            end = mid - 1;
        } else if(v[mid] > target) end = mid - 1;
        else start = mid + 1;
    }
    return firstOcc;
}

int findLastOccurrence(vector<int> &v, int target) {
    int start = 0, end = v.size() -1;
    int lastOcc = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(v[mid] == target) {
            lastOcc = mid;
            start = mid + 1;
        } else if(v[mid] > target) end = mid - 1;
        else start = mid + 1;
    }
    return lastOcc;
}

vector<int> findFirstLastOccurrence(vector<int> &v, int target) {
    int first = findFirstOccurrence(v, target);
    int last = -1;
    if(first != -1) last = findLastOccurrence(v, target);
    return vector<int> {first, last};
}
int main() {
    vector<int> v {1,1,2,2,2,3,3,4,5,6,7,7};
    int element = 2;
    auto ans = findFirstLastOccurrence(v, element);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}