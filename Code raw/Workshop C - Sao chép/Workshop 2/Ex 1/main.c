#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	double a, b;
	printf("a: ");
	scanf("%lf", &a);
	printf("b: ");
	scanf("%lf", &b);
	int c;
	do {
		printf("Phep tinh? (1-Tong, 2-Hieu, 3-Tich, 4-Thuong, bam 5 de ket thuc): ");
	    scanf("%d", &c);
	    switch (c) {
	    	case 1: printf("a+b=%lf\n", a+b);
	    	        break;
	    	case 2: printf("a-b=%lf\n", a-b);
	    	        break;
	    	case 3: printf("a*b=%2lf\n", a*b);
	    	        break;
	    	case 4: printf("a/b=%2lf\n", a/b);
	    	        break;
	    	default: printf("Op is not supported!\n");
	    	         break;
		}
	}
	while (c!=5);
	return 0;
}
