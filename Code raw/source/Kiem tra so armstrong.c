#include<stdio.h>
main(){
	int n, r, temp, sum=0;
	printf ("input n=");
	scanf ("%d", &n);
	temp=n;
	while (n>0){
		r=n%10; 
		sum=sum+(r*r*r);
		n=n/10;
	}
	if (temp=sum)
	printf ("\n so da cho la so armstrong");
	else
	printf ("\n so da cho khong la so armstrong ");
}
