#include <bits/stdc++.h>

using namespace std;

void Merge(int *a, int, int, int);

void MergeSort(int *a, int left, int right);

int main() {
    int length;

    cin >> length;
    int arr[length];

    for (int i = 0; i < length; ++i) {
        cin >> arr[i];
    }
    MergeSort(arr, 0, length - 1);

    for (int j = 0; j < length; ++j) {
        cout << arr[j] << endl;
    }
}

void Merge(int *a, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1];
    int R[n2];

    for (int i = 0; i < n1; ++i) L[i] = a[left + i];
    for (int j = 0; j < n2; ++j) R[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = 0;

    while (i != n1 && j != n2) {
        if (L[i] <= R[j]) {
            a[left + k] = L[i];
            i++;
        } else {
            a[left + k] = R[j];
            j++;
        }
        k++;
    }

    while (j != n2) {
        a[left + k] = R[j];
        j++;
        k++;
    }

    while (j != n2) {
        a[left + k] = R[j];
        j++;
        k++;
    }
    while (i != n1) {
        a[left + k] = L[i];
        i++;
        k++;
    }
}


void MergeSort(int *a, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        MergeSort(a, left, mid);
        MergeSort(a, mid + 1, right);
        Merge(a, left, mid, right);
    }
}