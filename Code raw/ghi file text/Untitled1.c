#include <stdio.h>
#include <ctype.h>
#define TRUE 1 
#define FALSE 0 
int exist (char* filename) {
    int existed = FALSE;
    FILE* f=fopen(filename, "r");
    if (f!=NULL) {
        existed=TRUE;
        fclose(f);
    }
    return existed;
}
int writeFile( char* filename) {
    char c;
    int CTRL_Z = -1;
    if (exist(filename) == TRUE) {
        printf("The file %s existed. Override it Y/N?: ", filename);
        if (toupper (getchar()) == 'N') return FALSE;
    }
    FILE* f= fopen( filename, "w");
    fflush(stdin);
    do {
        c=getchar();
        if (c!=CTRL_Z) fputc(c,f);
    }
    while (c!=CTRL_Z);
    fclose(f);
    return TRUE;
}
int printFile( char* filename) {
    char c;
    if (exist(filename) == FALSE) {
        printf("The file %s does not exist.\n", filename);
        return FALSE;
    }
    FILE* f=fopen(filename, "r");
    while ((c=fgetc(f)) != EOF)  {
        putchar(c);
    } 
    fclose(f);
    return TRUE;
}
int main() {
    char* filename = "f1.txt";
    writeFile(filename);
    printFile(filename);
    getchar();
    return 0;
}

