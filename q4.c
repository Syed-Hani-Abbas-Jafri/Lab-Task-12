#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = calloc(5, sizeof(int));
    if (!arr) return 1;

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    free(arr);

    arr = malloc(5 * sizeof(int));
    if (!arr) return 1;

    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("New array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
