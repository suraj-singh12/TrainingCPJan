#include <bits/stdc++.h>
using namespace std;

#define ll            long long
void bubbleSort(vector<int>);           // O(n^2)

void selectionSort(vector<int>);        // O(n^2)
//  sel sort is more linked to arrays, people discovered while dealing with arrays

void insertionSort(vector<int>);
// ins sort was created when people were trying to sort elements in linked list

// general info: 
// (one sorted part, another unsorted
// you take one element from unsorted part, and try to find its position in sorted part
// so we increase the sorted part, to whole array
// this is how insertion sort works)

// working: 
// in starting we assume the first element is already sorted
// then all the remaining array is unsorted.
// take the left most element from unsorted array, and put it at 
// its sorted position in sorted part
// repeat the process until whole array is sorted.


int main() {
    vector<int> v {32,3,6534,32,4534,5,3,455,345635,2};
    // vector<int> v {2, 7, 4, 1, 5, 3};
    bubbleSort(v);
    selectionSort(v);
    insertionSort(v);
    return 0;
}

void bubbleSort(vector<int> a) {
    int n = a.size();
    for(int i = 0; i < n -1; ++i) { // i = 0->n-1
        for(int j = 0; j < n -i -1; ++j) {  // j = 0 -> n-i-1
            if(a[j + 1] < a[j]) {
                swap(a[j +1], a[j]);
            }
        }
    }

    for(auto x : a) cout << x << " ";
    cout << endl;
}

void selectionSort(vector<int> a) {
    int n = a.size();
    for(int i = 0; i < n - 1; ++i) {        // i = 0 -> n-1
        int i_min = i;
        for(int j = i + 1; j < n; ++j) {    // j= i+1 -> n
            if(a[j] < a[i_min]) i_min = j;
        }
        swap(a[i], a[i_min]);
    }
    for(auto x : a) cout << x << " ";
    cout << endl;
}


void insertionSort(vector<int> a) {
    // total no of passes required: (n -1)  [first element is always sorted]
    // in the ith pass, we are comparing and shifting
    int n = a.size();
    for(int i = 1; i < n; ++i) {        // 1->n
        int key = a[i];
        int j = i -1;
        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];      // shift right, & find right pos of key
            j--;
        }
        a[j + 1] = key;     // put the key at right place
    }
    for(auto x : a) cout << x << " ";
    cout << endl;
}