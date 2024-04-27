#include<stdio.h>

int main(){
	int n;
	long long f0=0, f1=1, fn;
	printf ("Nhap gioi han n=");
	scanf ("%d", &n);
	while(f0<=n){
		printf("%lld ", f0);
		fn=f0+f1;
		f0=f1;
		f1=fn;
		
	}
return 0;
}
