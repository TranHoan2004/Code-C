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
	
	// sap xep mang
	for(i=0; i<n-1; i++){
		for (j=n-1; j>=i; j--){
			if (arr[j]<arr[j-1]){
				k=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=k;
			}
		}
	}
	printf("sap xep theo bubble sort:\n");
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}
