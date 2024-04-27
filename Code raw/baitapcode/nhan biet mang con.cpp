#include<stdio.h>

int main(){
//khai bao du lieu hai mang(ra soat so bo)
	int i,n,a[100],b[100],j,m;
	Nhap:
	printf("nhap so phan tu mang mau: ");
	scanf("%d",&n);
	if(n<=0){
		printf("nhap sai, vui long nhap lai.\n");
		goto Nhap;
	}
	printf("nhap du lieu mang mau:\n");
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	Nhap1:
	printf("nhap so luong phan tu mang can doi chieu: ");
	scanf("%d",&m);
	if(m<=0){
		printf("nhap sai, vui long nhap lai.\n");
		goto Nhap1;
	}
	if(m>n||m<=0){
		return 0;
	}
	printf("nhap du lieu mang can doi chieu: \n");
	for(i=0;i<m;i++){
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
//di vao kiem tra chinh thuc
	for(i=0;i<n;i++){
		if(b[0]==a[i]){
			int start=i;
			for(j=0;j<m;j++){
				if(b[j]==a[start]){
					start++;
					if(start==m+i-1&&b[m-1]==a[start]){
						printf("day la mang con cua mang mau.");
						return 0;
					}
				}
			}
		}
	}
	return 0;
}