#include <string.h>
#include <math.h>
int main() {
    char a[100];
    int charcount=0;
    int wordcount=0;
    gets(a);
    char *p=strtok(a," ");
    while (p!=NULL && wordcount<3) {
        charcount+=strlen(p);//dem so chu cai
        wordcount++;//dem 3 tu dau 
        p=strtok(NULL," ");
    }
    printf("%d", charcount);
}