#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter max string length: ");
    scanf("%d", &n);
    getchar();

    char *str = malloc(n * sizeof(char));
    if (!str) return 1;

    printf("Enter a line: ");
    fgets(str, n, stdin);

    int len = 0;
    while (str[len] != '\0') len++;

    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    free(str);
    return 0;
}
