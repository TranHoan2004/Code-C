/*
Đề 7.
Câu 1 
Nhập và in ma trận A=(aij)n*m, trong đó aij  là các số nguyên, n và m là hai số nguyên dương (1≤n,m≤5).
 Tìm số nguyên dương nhỏ nhất trong ma trận.
  Tính tổng của các phần tử trong ma trận.
Câu 2 
Viết chương trình nhập một xâu kí tự kiểm tra tính đối xứng của xâu, nếu xâu không đối xứng hãy in mỗi kí tự trên một dòng.
*/
#include<stdio.h>
#include<string.h>
int main(){
	//BÀI 1
	int m,n,i,j,a[10][10],sum=0,min=0;
	Nhap:
	printf("nhap so hang va so cot: ");
	scanf("%d %d",&m,&n);
	if(m>5||n>5||m<1||n<1){
		printf("theo de bai 1<=n,m<=5, moi nhap lai.\n");
		goto Nhap;
	}
	printf("nhap du lieu cho ma tran:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]>0) min=a[i][j];
		}
	}
	printf("ma tran ban da nhap la:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(min>a[i][j]&&a[i][j]>0) min=a[i][j];
			sum+=a[i][j];
		}
	}
	fflush(stdin);
	if(min==0) printf("ma tran khong co so nguyen duong.\n");
	else printf("so nguyen duong nho nhat trong ma tran la: %d.\n",min);
	printf("tong cac phan tu trong ma tran la: %d.\n",sum);
	//BÀI 2
	char s[100];
	printf("nhap xau: ");
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		if(s[i]!=s[strlen(s)-1-i]){
			printf("xau khong doi xung!\n");
			for(i=0;i<strlen(s);i++) printf("%c\n",s[i]);
			return 0;
		}
	}
	printf("xau doi xung!");
	return 0;
}