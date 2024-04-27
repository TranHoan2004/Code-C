/*
Đề 14
Câu 1 
Nhập họ tên, ngày, tháng năm sinh, hệ số lương (HSL), lương cơ bản của một người.
 Tính tiền thưởng của người đó theo tiêu chuẩn:
  nếu HSL>6 thì  thưởng 100000,
   HSL>=5 và <6 thì thưởng 70000,
    còn lại thưởng 50000.
Tính tiền thực lĩnh của người đó.
Câu 2 
Nhập 2 ma trận nguyên vuông A, B cùng cấp.
 Tính ma trận tích C=A*B, in ra kết quả màn hình.
*/

#include<stdio.h>
#include<conio.h>

struct thucLinh{
	char hoten[100];
	int ngs;
	int ths;
	int nams;
	float hsl;
	float lcb;
	float tien;
};

int main(){
	//BÀI 1
	int i,n;
	struct thucLinh tl[100];
	N:
	printf("nhap so nguoi: ");
	scanf("%d",&n);
	if(n<=0){
		printf("khong hop le, nhap lai!\n");
		goto N;
	}
	printf("\nnhap du lieu tung nguoi:\n");
	for(i=0;i<n;i++){
		printf("nguoi so %d\n",i+1);
		fflush(stdin);
		printf("ho ten: ");gets(tl[i].hoten);
		printf("ngay, thang, nam sinh: ");scanf("%d %d %d",&tl[i].ngs,&tl[i].ths,&tl[i].nams);
		printf("he so luong: ");scanf("%f",&tl[i].hsl);
		printf("luong co ban: ");scanf("%f",&tl[i].lcb);
		if(tl[i].hsl>6) tl[i].tien=tl[i].hsl*tl[i].lcb+100000;
		else if(tl[i].hsl>=5&&tl[i].hsl<=6) tl[i].tien=tl[i].hsl*tl[i].lcb+70000;
		else tl[i].tien=tl[i].hsl*tl[i].lcb+50000;
	}
	printf("\ncong thuc tinh tien thuc linh: bang luong co ban nhan he so luong cong tien thuong.\n");
	printf("he so luong tren 6 tien thuong 100k.\nhe so luong trong khoang tu 5 den 6 tien thuong 70k.\nhe so luong duoi 5 tien thuong 50k.");
	printf("\n\ntien thuc linh cua nhung nguoi da nhap la:\n\n");
	for(i=0;i<n;i++){
		printf("%d\t%s\t%d/%d/%d\t%.2f\n",i+1,tl[i].hoten,tl[i].ngs,tl[i].ths,tl[i].nams,tl[i].tien);
	}
	fflush(stdin);
	//BÀI 2
	int j,m,a[100][100],b[100][100],c[100][100];
	Nhap:
	printf("nhap cap cua 2 ma tran vuong A va B: ");
	scanf("%d",&m);
	if(m<=0){
		printf("khong hop le!");
		goto Nhap;
	}
	printf("nhap du lieu ma tran A:\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("ma tran A da nhap:\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("nhap du lieu ma tran B:\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("ma tran B da nhap:\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	int d=0;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			while(d<m){
				c[i][j]+=a[i][d]*b[d][j];
				d++;
			}
			d=0;
		}
	}
	printf("ma tran C=A*B la:\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}