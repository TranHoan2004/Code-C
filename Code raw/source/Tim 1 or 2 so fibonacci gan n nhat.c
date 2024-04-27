#include<stdio.h>
#include<math.h>
main(){
int arr[100];
int n,i; 
scanf ("%d", &n);
int check (int n){
	if(n<2) return 0;
	for(i=2; i<sqrt(n); i++)
	if(n%i==0) return 0;
	return 1;
}
if (check(n)==1){
	printf("%d %d %d", arr[n+1]  arr[n+2]  arr[n+3]);
	
}
}
