//bubble sort 
#include <stdio.h>
void bubblesort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[100], size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Invalid input. Please enter a positive integer for the array size.\n");
        return 1;
    }
    if (size > 100) {
        printf("Invalid input. Array size cannot exceed 100.\n");
        return 1;
    }
    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter an integer for each element.\n");
            return 1;
        }
    }
    bubblesort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}