#include<stdio.h>

int main(){
	int n;
	long long f0=0, f1=1, fn;
	printf ("Nhap n=");
	scanf ("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		fn=f0+f1;
		f0=f1;
		f1=fn;
		printf("Fibonacci(%d)=%lld\n", i, fn);
	}
return 0;
}

