#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    // In ra phần trên của hình bướm
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++)
            printf("*");
        for(j = 1; j <= 2*(n-i); j++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // In ra phần dưới của hình bướm
    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++)
            printf("*");
        for(j = 1; j <= 2*(n-i); j++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
