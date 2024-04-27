//check chan le va tong cac chu so cua no
#include <stdio.h>
int check (int);
int sumDigit (int);
int check (int n){
	if (n%2==0) return 1;
	else return 0;
}
int sumDigit (int n){
	int sum=0;
	while (n!=0){
		sum+= n%10;
		n/=10;
	}
	return sum;
}
main ()
{
	int n;
	printf ("Nhap n :");
	scanf ("%d",&n);
	if (check (n)==1) printf ("even") ;
	else printf ("odd");
	printf ("\nSum of all digit in %d =%d",n,sumDigit(n));
}

// xet tinh chan le va tinh tong cac chu so cua 1 so
//
//#include <stdio.h>
//#include <math.h>
//
//int main (int argc, char * argv[])
//{
//	int n,tong=0;
//	printf ("Nhap n :");
//	scanf ("%d",&n);
//	while (n!=0)
//	{
//		if (n%2==0) printf ("n la so chan");
//		else printf ("n la le");
//		tong+=n%10;
//		n/=10;
//	}
//	printf ("Tong cac chu so la : %d",tong);
//}

