#include <stdio.h>

#define NUM 10

int main() {
    int arr[NUM] = {6, 2, 7, 9, 1, 8, 5, 3, 4, 0};

    int temp, i, j;
    for (j = NUM - 1; j > 0; j--){
        for (i = 0; i < j; i++) {
            if (arr[i] > arr[i+1]) {
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
        }
    }

    for (i = 0; i < NUM; i++) {
        printf("%u ", arr[i]);
    }
    printf("\n");

    return 0;
}
