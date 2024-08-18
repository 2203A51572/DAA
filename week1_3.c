#include <stdio.h>
void quicksort(int a[], int first, int last);
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a[100], size, i;  
    printf("Enter the number of orders (Priority Numbers): ");
    scanf("%d", &size);
    if (size > 100) {  
        printf("Array overflow\n");
    } else {
        printf("Enter the orders' Priority Numbers:\n");
        for (i = 0; i < size; i++) {
            scanf("%d", &a[i]);
        }
        printf("Orders Priority before sorting:\n");
        for (i = 0; i < size; i++) {
            printf("%d\t", a[i]);
        }
        printf("\n");
        quicksort(a, 0, size - 1);
        printf("Orders Priority after sorting:\n");
        for (i = 0; i < size; i++) {
            printf("%d\t", a[i]);
        }
        printf("\n");
    }
    return 0;
}
void quicksort(int a[], int first, int last) {
    int i, j, pivot;
    if (first < last) {
        pivot = first;  
        i = first;
        j = last;
        while (i < j) {
            while (a[i] <= a[pivot] && i < last) {
                i++;
            }
            while (a[j] > a[pivot]) {
                j--;
            }
            if (i < j) {
                swap(&a[i], &a[j]);
            }
        }
        swap(&a[pivot], &a[j]);
        quicksort(a, first, j - 1);
        quicksort(a, j + 1, last);
    }
}

