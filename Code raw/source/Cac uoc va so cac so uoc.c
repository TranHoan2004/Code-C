#include<stdio.h>

int main()
{
	int n;
	printf ("n=");
	scanf ("%d", &n);
	int i;
	unsigned int counter=0;
	for (i=1; i<=n; i++){
		if (n%i==0){
			printf ("%d ", i);
		    counter ++;
		}		    
	}
	printf ("\n%d co tat ca %d uoc", n, counter);
	
	return 0;
}

