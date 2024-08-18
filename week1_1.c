#include <stdio.h>
void bubbleSortAscending(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void bubbleSortDescending(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (a[j] < a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
    int a[100], n, i;
    printf("Enter the number of times: ");
    scanf("%d", &n);
	printf("Enter time to reach destination:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    bubbleSortAscending(a, n);
    printf("Sorted times in ascending order:");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    printf("Enter the number of times: ");
    scanf("%d", &n);
    printf("Enter time to reach destination:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
    bubbleSortDescending(a, n);
    printf("Sorted times in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}

