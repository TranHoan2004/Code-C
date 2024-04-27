#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Tinh tong thu tu cac ky tu\n");
	char n[2000000];
	int i;
	printf("Press n: ");
	fflush(stdin);
    gets(n);
	int a = strlen(n);
	int sum=0;
	for (i=1; i<=a; i++) {
		sum+=i;
	}
	printf("%d", sum);
	return 0;
}
