#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printMinMaxDigits(int n) {
	int digit, min, max;
	digit = n%10;
	n/=10;
	min=max=digit;
	while (n>0) {
		digit = n%10;
	    n/=10;
		if (min>digit) min=digit;
		if (max<digit) max=digit;
	}
	printf("min=%d, max=%d", min, max);
}
int main(int argc, char *argv[]) {
	printf("Tim ky tu lon nhat va nho nhat trong chuoi\n");
	int n;
	do {
		printf("n: ");
		scanf("%d", &n);
		printMinMaxDigits(n);
	}
	while (n<0);
	return 0;
}
