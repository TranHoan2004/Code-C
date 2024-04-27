#include<stdio.h>

int main()
{ 
    int n;
    printf ("Nhap so nguyen duong n:");
    scanf ("%d", &n);
    if (n%2==1)
        printf ("Day la so le\n");
    else if (n%2==0)
        printf ("Day la so chan\n");
    if (n<0){
    	n*=-1;
	}
		int sum = 0;		
		while (n>0){
			sum+=n%10;
			n/=10;
		}
		printf ("SUM=%d", sum);
			
	return 0;
}
	

