#include <stdio.h>

int main() {
    int a, i, num = 1;

    printf("Enter a: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        printf("%d", num);
        if (i < a) {
            printf(", ");
        }
        num = num + 2;
    }

    printf("\n");
    return 0;
}