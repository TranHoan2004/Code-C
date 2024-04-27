#include<stdio.h>

int main()
{
	int n, i, gt;
	printf("nhap n=");
	scanf("%d", &n);
	
	if(n<0)
	   printf("khong thoa man");
	
	else
		for (i=n; i>=1; i--)
		     gt*=i;
	
	   printf("n!=%lld", gt);
	return 0;
}
