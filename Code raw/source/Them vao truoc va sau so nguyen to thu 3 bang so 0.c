#include <stdio.h>
#include<math.h>
//khai bao ham check
int check (int n){
	int i;
	if(n<2) return 0;
	for(i=2; i<sqrt(n); i++)
	if(n%i==0) return 0;
	return 1;
}
//khai bao ban dau
int main(){
	int i=0, n, j, count=0;
	printf ("input size of array n=");
	scanf("%d", &n);
	int a[n];
	for (i=0; i<n; i++){
		printf ("a[%d]=", i);
		scanf("%d", &a[i]);
	}
//thuat toan chinh
for(i=0; i<n; i++){//chen truoc so nguyen to
    if(check(a[i])==1){
    	count++;
    	if (count==3){
    		for(j=n-1; j>=i; j--){
    			a[j+1]=a[j];
			}
			a[i]=0;
			n++;
			i++;
		}
	}
}
count=0;
for(i=0; i<n; i++){//chen sau so nguyen to
    if(check(a[i])==1){
    	count++;
    	if (count==3){
    		for(j=n-2; j>=i; j--){
    			a[j+2]=a[j+1];
			}
			a[i+1]=0;
			n++;
			i++;
}
}
}
for(i=0; i<n; i++){
	printf (" %d", a[i]);
}
}
