#include<stdio.h>
 
 main(){
 	int n;
 	printf ("Nhap so giay n=");
 	scanf ("%d", &n);
 	printf ("%d ngay\n", n/86400);
 	n=n%86400;
 	printf ("%d gio\n", n/3600);
 	n=n%3600;
 	printf ("%d phut\n", n/60);
 	printf ("%d giay\n", n%60);
 	return 0;
 }
