#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
#include <conio.h>

int isPrime(int n){
	int i;
	if(n<2) return 0; //Neu n<2 thi out
	
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0; // nhung so khong phai so NT
	}
	return 1; // con lai la so NT
}
int main (){
	int arr[100];
	int i,n;
	int sum=0;
	
	 	
	printf("So luong phan tu = ");
 	scanf("%d",&n);
 	
	for (i=0;i<n;i++){
		printf("Nhap vao phan thu %d:  ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<n;i++){
		if(isPrime(arr[i])) {
			sum += arr[i];
		}
	}
	printf("\nOUTPUT:");
	printf("%d",sum);
return 0;
}



