#include<stdio.h>
main()
{
	int a[100];
	int n, i, max, vtmax;
	printf("input n=");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	vtmax=0;
	for(i=0; i<n; i++){
		if(a[vtmax]<a[i]) vtmax=i;
	}
	printf("gia tri max dau tien=%d o vi tri %d", a[vtmax], vtmax);
}
