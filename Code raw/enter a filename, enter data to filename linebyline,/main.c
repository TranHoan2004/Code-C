#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TRUE 1 
#define FALSE 0 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
	if (exist (filename) == 1) {
		printf("The file %s existed. Override it Y/N?: ", filename);
		if (toupper(getchar()) == 'N') return 0;
	}
	char line[201];
	int length=0;
	FILE* f= fopen(filename, 'w');
	fflush(stdin);
	do {
		gets(line);
		length = strleng(line);
		if (length>0) {
			fputs(line, f);
			fputs("\n", f);
		}
		
	}while (length>0);
		fclose(f);
		return 1;
}
int printFile (char* filename) {
	char c;
	if (exist(filename)==0) {
		printf("The file %s does not exist.\n", filename);
		return 0;
	}
	FILE* f=fopen(filename, "r");
	while ((c=fgetc(f))!=EOF) putchar(c);
	fclose(f);
	return 1;
}
int main(int argc, char *argv[]) {
	char filename[81];
	printf("Enter the file name: ");
	gets(filename);
	printf("Write file: \n");
	if (writeFile(filename) == 1) {
		printf("Data in the file %s: \n", filename);
		if (printFile(filename)==0) printf("File error\n");
	}
	else printf("Writing file fail\n", filename);
	getchar();
	return 0;
}
