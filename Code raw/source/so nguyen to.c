#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf ("Nhap n:");
	scanf ("%d",&n);
	int i, so = 1, j;
	for (i=1;i<=n;i++){
		for (j=2;j<=i-1;j++){
			if (i%j ==0){
				so = 0;
			}
		}
		if (so == 1){
			printf ("%d \t",i);
		}
		so = 1;
	}
	return 0;
}



// in ra cac so nguyen to tu 1 den n/2

//int main()
//{
//	int n,i,j,check;
//	printf ("Nhap n:");
//	scanf ("%d",&n);
//	printf ("cac so nguyen to tu 1 den n la:");
//	for (i=1;i<=n;i++){
//		check = 0;
//		for (j=1;j<=i/2;j++)
//		for (j=1;j*j<=i;j++)
//		if (i%j==0) check ++;
//		if (check ==1)
//		printf ("%5d",i);
//		}
//	}


// in ra cac so nguyen to nho hon n chia het cho 5
//int main()
//{
//	int n,i,j,a,b,check;
//	printf ("Nhap n:");
//	scanf ("%d",&n);
//	printf ("cac so nguyen to can tim la:");
//	for (i=1;i<n;i++){
//		check = 0;
//		for (j=1;j<=i/2;j++)
//		if (i%j==0) check ++;
//		a=i;
//		b=0;
//		while (a!=0){
//			b=b+a%10;
//			a=a/10;
//		if (check ==1 && b%5==0)
//		printf ("%d \t",i);		
//		}
//		}
//	}


