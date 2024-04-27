#include<stdio.h>
int main(){
	int i, n, s=0, j, k;
	printf("nhap so phan tu cua mang: \n");
	scanf("%d", &n);
	int arr[n];
	//tinh tong cac chu so trong mang
	for(i=0; i<n; i++){
		printf ("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n-1; i++){
		for (j=i+1; j<n; j++){
			if (arr[j]<arr[i]){
				k=arr[j];
				arr[j]=arr[i];
				arr[i]=k;
			}
		}
	}
	printf("sap xep theo interchange sort:\n");
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}
