#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr, int size) {
    int i, j, swaps;
    for (i = 0; i < size - 1; i++){
        swaps = 0;
        for (j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        printf("Pass #%d: %d\n", i + 1, swaps);
    }
}

int main () {
    int n = 9;
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    bubbleSort(arr, n);

    return 0;
}
