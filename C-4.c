#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int a[n], count[10] = {0}; 

   
    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 1; j <= 9; j++) {
            if(a[i] % j == 0) {
                count[j]++;
            }
        }
    }

   
    for(j = 1; j <= 9; j++) {
        printf("%d: %d\n", j, count[j]);
    }

    return 0;
}
