#include <string.h>
#include <math.h>
#include <stdio.h>
int main() {
    char s[100];
    gets(s);
    int i;
    for (i=0;s[i]!='\0';i++) {
        if (i==0||s[i-1]==' ') {
            s[i]=toupper(s[i]);
            if (s[i+1]!='\0') {
                s[i+1]=toupper(s[i+1]);
            }
        }
    }
    printf("\nOUTPUT:\n");
    printf("%s",s);
    return 0;
}