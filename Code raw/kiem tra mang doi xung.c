#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for (i=0;i<n/2;i++) {
        if (a[i]!=a[n-i-1])  {
            printf("Mang khong doi xung");
            return 0;
        }
    }
    printf("Mang doi xung");
    return 0;
}
