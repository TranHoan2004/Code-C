#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c1;
	char c2;
	printf("Nhap ky tu 1: ");	
	scanf(" %c", &c1); 
	printf("Nhap ky tu 2: ");
	scanf(" %c", &c2); 
	int i;
	char t; 
	if (c1 > c2) {
		t = c1;
		c1 = c2;
		c2 = t; 
	} 
	for (i = (int)c1 + 1; i< (int)c2; i++) {
		printf("%c: %d, %o, %X\n", i, i, i, i);
	}
	return 0;
}
