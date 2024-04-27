#include<stdio.h>
#include<math.h>
int check(int n){
	int i, m=sqrt(n);
	if (n<2) return 0;
	for (i=2; i<=m; i++)
	if (n%i==0) return 0;
	return 1;
}
main(){
	int a[100], n, i, j, temp, b, e, k, m;
	printf ("n=");
	scanf ("%d", &n);
	for (i=0; i<n; i++){
		printf ("a[%d] = ", i);
		scanf ("%d", &a[i]);
	}
	//ham chinh
	b=0; e=n;
	for (i=b; i<e-1; i++)
	for (j=i+1; j<e; j++){
		if (check (a[i]) &&check (a[j]) && a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf ("\nArray after sort\n");
	for (i=0; i<n; i++){
		printf ("%d ", a[i]);
	}
}
