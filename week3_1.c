#include <stdio.h>

int binarySearchPrice(int prices[], int size, int target) {
    int left = 0;
    int right = size - 1;   
    while (left <= right) {
        int mid = (right + left) / 2;      
        if (prices[mid] == target) {
            return mid;  
        }
        if (prices[mid] < target) {
            left = mid + 1;  
        } else {
            right = mid - 1;  
        }
    }  
    return -1; 
}
int main() {
    int n1, n2,i;  
    printf("Enter the number of product prices for Test Case 1: ");
    scanf("%d", &n1);
    int prices1[n1];  
   printf("Enter the product prices :\n");
    for ( i = 0; i <n1; i++) {
        scanf("%d", &prices1[i]);
    }
    int target1;
    printf("\nFind the price of a product priced at: ");
    scanf("%d", &target1);
    int result1 = binarySearchPrice(prices1,n1,target1);
    if (result1 != -1) {
        printf("Price %d found at index %d\n", target1, result1);
    } else {
        printf("Price %d not found\n", target1);
    }
    printf("\nEnter the number of product prices for Test Case 2: ");
    scanf("%d", &n2);
    int prices2[n2]; 
    printf("Enter the product prices:\n");
    for (i = 0; i <n2; i++) {
        scanf("%d", &prices2[i]);
    }
    int target2;
    printf("\nFind the price of a product priced at: ");
    scanf("%d", &target2);
    int result2 = binarySearchPrice(prices2,n2,target2);
    if (result2 != -1) {
        printf("Price %d found at index %d\n", target2, result2);
    } else {
        printf("Price %d not found\n", target2);
    }
    return 0;
}

