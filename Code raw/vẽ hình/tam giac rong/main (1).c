/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void printTriangle(int n) {
    int i, j;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        if (i == n || i == 1)
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
        else {
            printf("*");
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Nhập vào chiều cao của tam giác: ");
    scanf("%d", &n);
    printTriangle(n);
    return 0;
}

