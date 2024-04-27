#include <stdio.h>
#include <conio.h>
int main(){
	void nhap_mang(int [1000],int );
	void in(int [1000],int);
	   int i,j,n;
	   int a[1000];
	   printf ("Nhap so phan tu cua mang:");
	scanf("%d",&n);
    nhap_mang(a,n);
        getch();
	return 0;	
	}
	
void nhap_mang(int a[1000],int n){
		int i,b[1000];
 	for(i=0;i<n;i++){
	printf("a[%d]=",i);
		scanf("%d",&a[i]);
      	}
   for(i=0;i<n;i++)
     	 b[i]=a[n-i-1];
	for(i=0;i<n;i++)
	 printf("%d ",b[i]);
	}
