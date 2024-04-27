#include<stdio.h>
#include<math.h>
int bitoDec(long biNumber)
{
	int p=0;
	int decNumber=0;
	while(biNumber>0){
		decNumber+=(biNumber%10)*pow(2, p);
		++p;
		biNumber/=10;
	}
	return decNumber;
}
int main(){
	long biNumber; // bo khi khai gia tri cu the
	printf("\n input n=");
	scanf ("%li", &biNumber); // bi khi khai gia tri cu the
	// long biNumber=10000001110001000011
	printf(" Dec=%d", bitoDec(biNumber));
}
