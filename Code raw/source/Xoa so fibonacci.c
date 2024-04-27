#include<stdio.h>
#include<math.h>
void xoa(int a[], int n, int pos){
	int i;
	for(i=pos; i<n-1; i++){
		a[i]=a[i+1];
	}
	n--;
}
int fibo(int n){
    int n1=1, n2=0, val1, val2;
    while(n1<n){
    	val1=n1+n2;
    	n2=val1;
    	val2=n1+n2;
    	n1=val2;
    	if(val1==n||val2==n) return 1;
	}
	return 0;
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
		if(fibo(a[i])){
			xoa(a,n,i);
			n--; 
			i--;
		}
	}
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}

