#include <stdio.h>
#include<math.h>
//khai bao ham check
int cp(int n){
	int x=sqrt(n);
	if (x*x==n){
		return 1;
	}
	else return 0;
}
int main(){
	int n, i;
	printf ("Nhap so phan tu trong mang:");
	scanf ("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		printf ("phan tu thu a[%d]=", i);
		scanf ("%d", &a[i]);
	}
	int cnt=0;
	for (i=n-1; i>=0; i--){
		if(cp(a[i])==1){
			cnt++;
		}
		if(cnt==2){
			a[i-1]=0;
			a[i+1]=0;
			break;
		}
	}
	for(i=0; i<n; i++){
		printf ("%d ", a[i]);
	}
}
