#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int leftSize = mid - start + 1;
    int rightSize = end - mid;

    int* left = new int[leftSize];
    int* right = new int[rightSize];

    // Copy data to left and right arrays
    for (int i = 0; i < leftSize; i++) {
        left[i] = arr[start + i];
    }
    for (int i = 0; i < rightSize; i++) {
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = start;

    // Merge the left and right arrays
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left array, if any
    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy remaining elements of right array, if any
    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end )/ 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

void printArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    // Generate random array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Your array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Array after Merge sort" << endl;
    printArray(arr, n);

    delete[] arr;
    return 0;
}
