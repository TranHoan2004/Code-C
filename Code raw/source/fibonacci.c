//in ra n so fibonacci
#include <stdio.h>
#include <string.h>
int fibonacci (int val)
{ 
if (val<0)
return 1;
else if (val ==0 || val ==1)
return val;
else 
return fibonacci(val - 1) + fibonacci (val - 2); 
}

int main ()
{
	int n0=0,n,i;
	printf ("Nhap n:");
	scanf ("%d",&n);
	for (i=1;i<n;i++){
		printf ("%d \t",fibonacci(i) );
	}
	return 0;
}

//fibonacci dung do while
//#include <stdio.h>
//#include <math.h>
//
//int n;
//void NhapN(){
//	do{
//		printf ("N=");
//		scanf ("%d",&n);
//	}while (n>0);
//}
//main (){
//	int arr[100];
//	int a=-1,b=1,c,i=-1;
//	NhapN();
//	while (a+b<n){
//		c=a+b;
//		a=b;
//		b=c;
//		printf ("%d",c);
//	}
//    }
