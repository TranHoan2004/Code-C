#include<stdio.h>
main(){
	int a[1000], n, i, sum;
	printf ("n=");
	scanf ("%d", &n);
	sum=0;
	for (i=0; i<=n-1; i++){
		printf ("a[%d]=", i);
		scanf ("%d", &a[i]);
		while (a[i]!=0){
			sum+=a[i]%10;
			a[i]/=10;
		}
	}
	printf ("%d", sum);
}
