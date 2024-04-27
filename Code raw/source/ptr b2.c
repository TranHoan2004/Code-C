#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input (double*a, double *b, double*c){
	printf("Enter a="); scanf("%lf",a);
	printf("Enter b="); scanf("%lf",b);
	printf("Enter c="); scanf("%lf",c);
}
void solveEquation(double a, double b, double c, int*n, double*x1,double*x2){
	double delta,t;
	delta = b*b-4*a*c;
	if(delta<0)
	n=0;
	else if(delta==0) {
		*n=1;
		*x1 = -b/(2*a);
	}
	else {
		*n=2;
		t= sqrt(delta);
		*x1 = (-b+t)/(2*a);
		*x2 = (-b-t)/(2*a);
	}
}
void display(int n, double x1, double x2) {
	if (n==0)
	printf ("Delta is negative. No root!\n");
	else if(n==1)
	printf("Delta =0, there is a doulbe root x0 =%f\n",x1);
	else printf("There are 2 separated roots: x1=%f, x2=%f\n",x1,x2);
}
int main () {
	double a,b,c;
	int n; double x1, x2;
	input(&a,&b,&c);
	solveEquation(a,b,c,&n,&x1,&x2);
	display(n,x1,x2);
	return 0;
}
