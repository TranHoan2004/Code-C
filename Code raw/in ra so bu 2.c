#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    gets(a);
    int i;
    for (i=0;i<8;i++) {
        if (a[i]=='0') {
            a[i]='1';
        }
        else if (a[i]=='1') {
            a[i]='0';
        }
    }
    for (i = 7; i >= 0; i--) {
        if (a[i] == '1') {
            a[i] = '0';
        } else {
            a[i] = '1';
            break;
        }
    }
    printf("%s", a);
}
