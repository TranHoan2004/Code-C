/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int sum=0;
    printf("Nhap: ");
    fflush(stdin);
    fgets(a, sizeof(a), stdin);
    for (int i=0; i< strlen(a); i++) {
        if (a[i]>='0' && a[i] <='9') {
            sum+=a[i]-'0';
        }
    }
    printf("%d", sum);
    return 0;
}
