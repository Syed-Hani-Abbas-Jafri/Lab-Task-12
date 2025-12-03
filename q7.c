#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPal(char *s, int left, int right) {
    if (left >= right) return 1;
    if (tolower(s[left]) != tolower(s[right])) return 0;
    return isPal(s, left + 1, right - 1);
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int n = strlen(str);

    if (isPal(str, 0, n - 1)) printf("Palindrome");
    else printf("Not palindrome");

    return 0;
}
