#include <stdio.h>

void printArray(int arr[], int n);
// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    
    // Outer loop for each pass
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        printArray(arr, n);
        // Inner loop for comparing adjacent elements
        for (j = 0; j < n - i - 1; j++) {
            printArray(arr, n);
            // Swap if current element is greater than next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        
        // If no swapping occurred, array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

// Function to print array elements
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}

