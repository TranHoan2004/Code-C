#include <stdio.h>
main() {
	int n;
	printf("Nhap so tien ban muon doi=");
	scanf("%d", &n);
	printf("so to 500k la %d\n", n/500);
	n=n%500;
	printf("so to 200k la %d\n", n/200);
	n=n%200;
	printf("so to 100k la %d\n", n/100);
	n=n%100;
	printf("so to 50k la %d\n", n/50);
	n=n%50;
	printf("so to 20k la %d\n", n/20);
	n=n%20;
	printf("so to 10k la %d\n", n/10);
	n=n%10;
	printf("so to 5k la %d\n", n/5);
	n=n%5;
	printf("so to 2k la %d\n", n/2);
	n=n%2;
	printf("so to 1k la %d\n", n/1);
	n=n%1;
	return 0;
}
