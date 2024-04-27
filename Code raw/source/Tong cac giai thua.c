#include<stdio.h>

int main()
{
    unsigned int n;
    printf ("n=");
    scanf ("%d", &n);
	unsigned long long sum=0;
	unsigned long long gt=1;
	int i;
	for (i=1; i<=n; i++){
		gt*=i;
		sum+=gt;
	}
	printf ("SUM=%d", sum);
	 
	return 0;
}

