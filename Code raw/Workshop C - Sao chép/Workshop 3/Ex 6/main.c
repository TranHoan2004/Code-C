#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double Fibo(double n) {
	int t1=1, t2=1, f=1, i;
	while (f<n) {
		f= t1 +t2;
		t1 = t2;
		t2 = f;
	}
	return f;
}
int main(int argc, char *argv[]) {
	double n;
	printf("Kiem tra xem co phai la so fibo k\n");
	printf("N: ");
	scanf("%lf", &n);
	if (n==1) return 1;
	if (Fibo(n)==n) {
		printf("n is a Fibo element.");
		return 1;
	}
	else {
		printf("N is not a Fibo element.");
	}
	return 0;
}
