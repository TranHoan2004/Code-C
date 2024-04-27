#include <stdio.h>
#include<math.h>
//khai bao ham check
int check (int n){
	int m;
	m=sqrt(n);
	if (m*m==n)
	return 1;
	else
	return 0;
}
int main(){
	int i=0, n, j, count=0;
	printf ("nhap so phan tu cua mang:\n");
	scanf ("%d", &n);
	int arr[n];
	for (i=0; i<n; i++){
		printf ("arr[%d]", i);
		scanf ("%d", &arr[i]);
	}//ham chinh
	for (i=0; i<n; i++){
		if (check(arr[i])==1){
			for (j=n-1; j>=i; j--){
				arr[j+1]=arr[j];
			}
			arr[i]=99;
			n++;
			i++;
			}
	}
	for (i=0; i<n; i++){
		printf (" %d", arr[i]);
	}
	}

