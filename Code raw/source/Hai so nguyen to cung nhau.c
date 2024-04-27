#include<stdio.h>

int main(){
	int m,n;
	printf ("Nhap hai so m, n>0:");
	scanf ("%d%d", &m, &n);
	if (m>0 && n>0){
		while (m!=n){
			if (m>n)
			m=m-n;
			else
			n=n-m;
		}if (m==1){
			printf ("Day la hai so nguyen to cung nhau");
		}
		
		else{
			printf ("Day khong la hai so nguyen to cung nhau");
		}
		
	}
	else{
		printf ("Nhap sai yeu cau, nhap lai m va n lon hon 0");
	}
}

