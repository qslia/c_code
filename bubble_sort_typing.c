#include <stdio.h>


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubbleSort(int arr[], int n) {
    int temp;
    int is_swapped = 0;
    for (int i = 0; i < n - 1; i++) {
        
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 
                is_swapped = 1;
            }
        }

        if (!is_swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {11, 232, 1232, 123231232, 3};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);


}
