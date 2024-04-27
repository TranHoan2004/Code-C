//Tinh bieu thuc

#include<stdio.h>
#include <math.h>

int main()
{
	system ("cls");
	int x,sum=0;
//	int y;
	scanf ("%d",&x);
//	scanf ("%d",&y);
	while (x!=0){
	sum += x*x +x*2+1;
	x/=10;
	}
	printf ("\n OUTPUT: \n");
	printf ("%0.2lf ",sum);
	
}
