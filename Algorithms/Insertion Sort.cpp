#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int *a, int n) { //Function to sort the array using Insertion Sort

    for (int i = 1; i < n; ++i) {
        int key = a[i];

        int j = i - 1;

        while (key < a[j] && j >= 0) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main() {
    int a[] = {5, 4, 3, 1, 2};

    insertion_sort(a, sizeof(a) / sizeof(a[0]));

    for (int x : a)
        cout << x << endl;
} 
