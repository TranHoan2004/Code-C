//Thay the so nguyen to thu 2 tinh nguoc tu duoi len bang so b�nh phuong cua no
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
main(){
	int a[100], n, i, index, k, p, count;// p la vi tri phan tu goc, k la phan tu can thay the
	printf ("input size of array n=");
	scanf("%d", &n);
	printf ("input array\n");
	for (i=0; i<n; i++){
		printf ("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf ("\nArray before change\n");
	for(i=0; i<n; i++){
	printf ("%d", a[i]);}
//thuat toan chinh
k=0, p=2;
count=0;
for (i=n; i>0; i--){
	if(check (a[i])==1)
	count++;
	if (count==p){
		index=i;
		break;
	}
}
	index=index+k;
	a[i]=a[i]*a[i];
//in ra ket qua
printf ("\narray after change\n");
for (i=0; i<n; i++){
	printf ("%d", a[i]);}
}


