#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	do {
		printf("a: ");
	    scanf("%d", &a);
	    printf("b: ");
	    scanf("%d", &b);
	    int temp;
	    temp = a;
	    a=b;
	    b=temp; 
	    printf("a= %d, b=%d\n Nhap 0 de ket thuc, nhap 1 de tiep tuc! ", a, b);
	    scanf("%d", &c);
	}
	while (c!=0);
	
	return 0;
}
