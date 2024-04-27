/*
Câu 1 
Nhập 2 số  thực a, b từ bàn phím.
 Viết chương trình tính toán (+,-,*,/) cho hai số thực này, khi lựa chọn một phép toán (+,-,*,/) từ bàn phím.
Câu 2 
Nhập ma trận thực bất kỳ, n hàng và m cột (sử dụng con trỏ).
 Tính tổng các giá trị trên đường chéo chính, đường chéo phụ.
*/

#include<stdio.h>

int main(){
	//BÀI 1
	float a,b;
	char c;
	printf("moi nhap 2 so a va b:\n");
	scanf("%f%f",&a,&b);
	printf("nhap phep toan ban muon thuc hien (+; -; *; /): ");
	fflush(stdin);
	scanf("%c",&c);
	if(c=='+') printf("%f + %f = %.2f",a,b,a+b);
	else if(c=='-') printf("%f - %f = %.2f",a,b,a-b);
	else if(c=='*') printf("%f * %f = %.2f",a,b,a*b);
	else if(c=='/') printf("%f / %f = %.2f",a,b,a/b);
	//BÀI 2
	int i,j,m,n,s[100],sumcc=0,sumcp=0;
	Nhap:
	printf("\nnhap so hang: ");
	scanf("%d",&m);
	printf("nhap so cot: ");
	scanf("%d",&n);
	if(m<=0||n<0){
		printf("ma tran khong hop le!");
		goto Nhap;
	}
	printf("nhap du lieu cho ma tran: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("s[%d][%d] = ",i,j);
			scanf("%d",(s+i*n+j));
		}
	}
	printf("ma tran ban da nhap: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",*(s+i*n+j));
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==j) sumcc+=*(s+i*n+j);
			if(i+j==m-1) sumcp+=*(s+i*n+j);
		}
	}
	printf("tong cac gia tri tren duong cheo chinh la %d.\n",sumcc);
	printf("tong cac gia tri tren duong cheo phu la %d.",sumcp);
	return 0;
}