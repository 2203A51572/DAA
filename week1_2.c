#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1),j;
    for ( j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main() {
    int n,i;
    printf("Enter number of product IDs: ");
    scanf("%d", &n);
    int productIDs[n];
    printf("Enter product IDs:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &productIDs[i]);
    }
    quickSort(productIDs, 0, n - 1);
    printf("After Sorting Product IDs:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", productIDs[i]);
    }
    printf("\n");
    return 0;
}
