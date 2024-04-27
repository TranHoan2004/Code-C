#include<stdio.h>
main(){
	// khai bao
	int a[100];
	int n, i, max, min, vtmax;
	printf ("input size of array =");
	scanf ("%d", &n);
	printf ("\nArray\n");
	for (i=0; i<n; i++){
		printf ("a[%d] = ", i);
		scanf ("%d", &a[i]);
	}
	max=a[0];
	vtmax=1;
	for (i=1; i<n; i++){
		if (a[i]>max){
			max=a[i];
			vtmax=i;
		}
	}
	printf ("Gia tri lon nhat = %d o vi tri %d", max, vtmax);
	min=a[0];
	vtmax=1;
	for (i=1; i<n; i++){
		if (a[i]<min){
			min=a[i];
			vtmax=i;
		}
	}
	printf ("\nGia tri nho nhat = %d o vi tri %d", min, vtmax);
}
