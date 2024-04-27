#include<stdio.h>

int main()
{
	int n;
	printf ("n=");
	scanf ("%d", &n);
	
	if (n<=0)
	printf ("Hay nhap lai so n sao cho n>0\n");
	else{
		int i;
		printf ("\ncac so chan:");
		for (i=0 ;i<=n;i+=2)
		printf ("%d,", i);
		printf ("\ncac so le:");
		for (i=1; i<=n; i+=2)
		printf ("%d,", i);
	}
	
	return 0;
}

