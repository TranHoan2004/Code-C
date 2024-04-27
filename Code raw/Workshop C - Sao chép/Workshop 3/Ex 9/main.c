#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gcd(int a, int b) {
    if (b==0) {
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}
int lcm(int a, int b) {
    return a*b/gcd(a, b);
}
int main(int argc, char *argv[]) {
	printf("UCLN va BCNN\n");
	int a, b;
	do {
		printf("a: ");
		scanf("%d", &a);
		printf("b: ");
		scanf("%d", &b);
	}
	while (a<=0 || b<=0);
	int d = gcd(a, b);
	int m = lcm(a, b);
	printf("%d\n", d);
	printf("%d", m);
	return 0;
}
