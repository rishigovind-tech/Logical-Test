#include <stdio.h>

int main()
{
    int a, i, count;

    printf("Enter a: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        count = a - 1;
    else
        count = a;

    for (i = 1; i <= count * 2; i += 2)
    {
        printf("%d", i);
        if (i < count * 2 - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}