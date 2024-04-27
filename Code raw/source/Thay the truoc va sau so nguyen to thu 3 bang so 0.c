#include <stdio.h>
#include<math.h>
//khai bao ham check
int check (int n){
	int i, k=0;
	if(n==1||n==0)
	return 0;
	else if (n==2)
	return 1;
	else if(n!=2&&n!=1){
		if(n%i==0){
			k+=1;
		}
	}
	if(k>0)
	return 0;
	else 
	return 1;
}
//khai bao ban dau
int main(){
	int n, i=0, count=0;
	printf ("input size of array n=");
	scanf("%d", &n);
	int a[n];
	for (i=0; i<n; i++){
		printf ("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf ("\nArray before change\n");
	for(i=0; i<n; i++){
	printf ("%d", a[i]);}
//thuat toan chinh
for(i=0; i<n; i++){
	if (check(a[i])==1){
		count+=1;
		if(count==3){
			a[i-1]=0;
			a[i+1]=0;
		}
	}
}
//in ra ket qua
printf ("\narray after change\n");
for(i=0; i<n; i++){
	printf ("%d", a[i]);
}
}
