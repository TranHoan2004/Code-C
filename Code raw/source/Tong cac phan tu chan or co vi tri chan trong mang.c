#include<stdio.h>
main (){
	int a[100];
	int n, i, j, temp;
	printf ("size of array = ");
	scanf ("%d", &n);
	for (i=0; i<n; i++){
		printf ("a[%d] = ", i);
		scanf ("%d", &a[i]);
	}
	float s;
	for (i=0; i<n; i++){
		//if (a[i]%2==0) // phan tu co gia tri chan
		if (i%2==0) // phan tu co vi tri chan
		s=s+a[i];
	}
	printf ("tong cua cac phan tu chan / co vi tri chan trong mang = %0.2f", s);
	return 0;
}
