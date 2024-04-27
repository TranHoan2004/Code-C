#include <string.h>
#include <math.h>
#include <stdio.h>
int main() {
    char a[100];
    int t=0,i,j;
    gets(a);
    int leng=strlen(a);
    for (i=0;i<leng;i++) {
        if ((i==0&&a[0]=='h')||(a[i-1]==' '&&a[i]=='h')) {
            for (j=i;a[j]!=' ';j++) {
                if (a[j]=='g'&&(a[j+1]==' '||a[j+1]=='\0')) {
                    t++;
                }
            }
        }
    }
    printf("%d",t);
    return 0;
}