#include <stdio.h>
int main() {
    int n,sum,i,j;
    scanf("%d", &n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &sum);
    printf("\nOUTPUT:\n");
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (a[i]+a[j]==sum) {
                printf("%d\n%d",i,j);
                return 0;
            }
        }
    }
    return 0;
}