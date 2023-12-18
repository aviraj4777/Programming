#include <stdio.h>

int main() {
    int size, product = 1;
    printf("Enter the size of the array (max 100): ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        product *= arr[i];
    }
    printf("Product of all elements in the array is: %d", product);
    return 0;
}


