#include <string.h>
#include <math.h>
int main() {
    int a[5], ln=0, b[5];
    int i,j,g=0;
    for (i=0;i<5;i++) {
        scanf("%d", &a[i]);
    }
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            if (a[i]<a[j]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (i=0;i<5;i++) {
        if (a[i]%2==0) {
            b[g]=a[i];
            g++;
        }
    }
    printf("\nOUTPUT:\n");
    for (i=0;i<g;i++) {
        if (i!=g-1) {
            printf("%d", b[i]);
            printf("\n");
        }
        if (i==g-1) {
            printf("%d", b[i]);
        }
    }
    return 0;
}