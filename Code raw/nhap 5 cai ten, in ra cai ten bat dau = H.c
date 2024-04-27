#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int n,i;
    scanf("%d", &n);
    getchar(); 
    char names[n][50];
    char letter;
    for (i=0;i<n;i++) {
	    gets(names[i]);
    }
    scanf("%c", &letter);
    getchar();  
    printf("\nOUTPUT:\n");
    for (i = 0; i < n; i++) {
        if (toupper(names[i][0]) == toupper(letter)) {
            printf("%s\n", names[i]);
        }
    }
    return 0;
}



