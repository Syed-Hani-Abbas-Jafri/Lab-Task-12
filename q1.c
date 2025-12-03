#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    if (!arr) return 1;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
