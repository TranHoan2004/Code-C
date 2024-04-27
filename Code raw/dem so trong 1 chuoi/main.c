#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[100];
	int i;
	int count=0;
	printf("Press: ");
	gets(s);
	for (int i=1; i<100; i++) {
		if ((isdigit(s[i])) && (i==0) || (!isdigit(s[i-1])) == 0) {
			count++;
		}
		
	} 
	printf("%d", count);
	return 0;
}
