#include<stdio.h>
#include<math.h>
void xoa(int a[], int n, int pos){
	int i;
	for(i=pos; i<n-1; i++){
		a[i]=a[i+1];
	}
	n--;
}
int cp(int n){
	int x=sqrt(n);
	if(x*x==n){
		return 1;
	}
	else return 0;
}
int main(){
	int n, i; 
	printf ("nhap so phan tu trong mang:");
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		printf ("Phan tu thu a[%d]:", i);
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		if(cp(a[i])){
			xoa(a,n,i);
			n--; 
			i--;
		}
	}
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
