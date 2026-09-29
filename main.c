#include <stdio.h>

#define NUM 10

int main() {
    int arr[NUM] = {6, 2, 7, 9, 1, 8, 5, 3, 4, 0};

    int temp, i, j;
    for (i = 0; i < NUM - 1; i++) {
        for (j = NUM - 1; j > i; j--) {
            if (arr[j-1] > arr[j]) {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < NUM; i++) {
        printf("%u ", arr[i]);
    }
    printf("\n");

    return 0;
}
