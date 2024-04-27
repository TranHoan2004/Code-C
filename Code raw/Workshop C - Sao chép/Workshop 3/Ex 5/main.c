#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double fibo(double n) {
	int t1=1, t2=1, f=1, i;
	for (i=3; i<=n; i++) {
		f= t1 +t2;
		t1 = t2;
		t2 = f;
	}
	return f;
}
int main(int argc, char *argv[]) {
	double n;	
	printf("In ra so fibo thu n\n");
	printf("Press n: ");
	scanf("%lf", &n);
	do {
		fibo(n); 
	}
	while (n<1);
	printf("%lf", fibo(n));
	return 0;	
}
