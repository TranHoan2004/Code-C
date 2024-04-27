#include<stdio.h>
main() {
	double a,b,x;
	printf("a= ");
	scanf("%lf", &a);
	printf("b= ");
	scanf("%lf", &b);
	x=-b/a; //phan chinh
	if (a!=0) printf("x= %0.2lf", x);
	else if (b!=0) printf (" Phuong trinh vo nghiem");
	else printf(" Phuong trinh vo so nghiem");
	return 0;
}
