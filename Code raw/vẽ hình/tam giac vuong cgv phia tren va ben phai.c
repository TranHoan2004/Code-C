/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int i, j, n=5;

    

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= n; j++) {
            if(j <= n - i) {
                printf("  ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}

