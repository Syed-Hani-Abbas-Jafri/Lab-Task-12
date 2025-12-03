#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *s = malloc(n * sizeof(struct Student));
    if (!s) return 1;

    for (int i = 0; i < n; i++) {
        printf("Enter name and marks: ");
        scanf("%s %d", s[i].name, &s[i].marks);
    }

    printf("Students with >75 marks:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].marks > 75) {
            printf("%s %d\n", s[i].name, s[i].marks);
        }
    }

    free(s);
    return 0;
}
