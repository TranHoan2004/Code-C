#include<stdio.h>
#include<math.h>

int main()
{
	int m, n;
	printf ("Nhap m<n:");
	scanf ("%d%d", &m, &n);
	
	if (m>=0 &&m<n){
		int start=sqrt(m);
	    start=(start*start==m)?start:start+1;
     	int end=sqrt(n);
    	int i;
    	for (i=start; i<=end; i++)
    	printf("cac so chinh phuong la:%d \n", i*i);
	}else
	printf ("Nhap lai m va n lon hon 0 va m<n\n");
	
	
	return 0;
}
