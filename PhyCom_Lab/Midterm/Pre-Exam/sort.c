#include <stdio.h>

void swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int partition(double arr[], int low, int high) {
    double p = arr[low];
    int i = low;
    int j = high;

    while (i < j) {

        while (arr[i] <= p && i <= high - 1) {
            i++;
        }

        while (arr[j] > p && j >= low + 1) {
            j--;
        }

        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(double arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    double arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    // bubble sort
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (arr[i] < arr[j]) {
    //             swap(&arr[i], &arr[j]);
    //         }
    //     }
    // }

    quickSort(arr, 0, n - 1);

    for (int nn = 0; nn < n; nn++) { printf("%.2lf ", arr[nn]); }

    return 0;
}