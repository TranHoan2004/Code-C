#include <stdio.h>
#include <math.h> //kham bug hm check 
int check (int n) 
{ int i; 
if (n<2) return 0; 
for (i=2; i<=sqrt(n); i++){
if(n%i==0) return 0;}
return 1;}
//khai bao ban dau 
main(){
int a[100],n,i,count;
printf("Input size of array n= "); 
scanf("%d",&n);} 
printf ("Input array: \n"); 
for(i=0;i<n;i++){
printf("a[%] = ",1); 
scanf("%d",&a[i]);
printf("\nArray before change \n");
}
for(i=0; i<n; i++) {
printf("%d", a[i]);
count=0; 
for(i-n-1; i>e; i--){
if (check (a[i])==1) count++; 
if (count = 2) { 
a[1]=a[i]*a[1];break;
}
// in ra ket qua printf("\nArray after change \n"); for(i=0; i<n; i++){ printf("%d", ali]);)
}
printf ("\nArray after sort\n");
for (i=0;i<n;i++){
	printf ("%d",&a[i]);}
}
