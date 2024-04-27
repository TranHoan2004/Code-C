#include<stdio.h>
int main(){
	int i,n,a[100],m1=-100,m2=-100,count=0;
	printf("nhap so phan tu cua mang: ");
	Nhap:
	scanf("%d",&n);
	if(n<=0){
		printf("mang khong hop le, vui long nhap lai: ");
		goto Nhap;
	}
	printf("\nnhap du lieu cho mang: \n");
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>m1) m1=a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>=m2&&a[i]<m1){
			count++;
			m2=a[i];
		}
	}
	if(count==0) printf("cac gia tri cua mang bang nhau.");
	else printf("phan tu lon thu 2 cua mang la: %d",m2);
	return 0;
}