#include<stdio.h>

int main()
{
	int n;
	printf ("Nhap n> 0:");
	scanf ("%d", &n);
	int i;
	float sum = 0;
	for (i=1; i<=n; i++){
		sum += 1.0f / i;		 
	}
	printf ("sum=%f", sum);
	
	return 0;
}

