#include<stdio.h>
int main(){
int i, n, j, k, min;
printf("nhap so phan tu cua mang:\n");
scanf("%d", &n);
int a[n];
// tinh tong cac chu so trong mang
for(i=0; i<n; i++){
	printf("a[%d]= ", i);
	scanf("%d", &a[i]);
}
for(i=0; i<n-1; i++){
	min=i;
	for(j=i+1; j<n; j++){
		if(a[j]<a[min]){
			min=j;
		}
	}
	k=a[i];
	a[i]=a[min];
	a[min]=k;
}
printf("sap xep theo selection sort:\n");
for(i=0; i<n; i++){
	printf("%d ", a[i]);
}
}
