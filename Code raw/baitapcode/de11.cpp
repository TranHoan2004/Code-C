/*
Đề 11
Câu 1. 
Hãy nhập vào họ tên chủ hộ và chỉ số đầu, chỉ số cuối điện năng tiêu thụ của một tháng.
Tiền điện hàng tháng được tính như sau:
-	100 số đầu tính 500 đ /1 số
-	Từ số 101 trở lên tính 1000 đ/1số
Hãy tính số tiền phải trả trong tháng đó và in ra họ tên chủ hộ và tiền điện phải trả.
Câu 2. 
Nhập một xâu bất kỳ từ bàn phím. Đếm số ký tự ‘A’ trong một xâu, 
Đưa ra vị trí xuất hiện ký tự đó trong xâu.
*/

#include<stdio.h>
#include<string.h>
struct tienDien {
	char hoTen[100];
	float soDau;
	float soCuoi;
	int pay;
};

int main(){
	//BÀI 1
	int i,n;
	struct tienDien td[100];
	Nhap:
	printf("nhap so chu ho: ");
	scanf("%d",&n);
	if(n<=0){
		printf("khong hop le, moi nhap lai.\n");
		goto Nhap;
	}
	printf("nhap du lieu:\n");
	Nhap1:
	fflush(stdin);
	for(i=0;i<n;i++){
		printf("chu ho so %d:\n",i+1);fflush(stdin);
		printf("ho ten: ");gets(td[i].hoTen);
		printf("so dau: ");scanf("%f",&td[i].soDau);fflush(stdin);
		printf("so cuoi: ");scanf("%f",&td[i].soCuoi);
		if(td[i].soDau<=100&&td[i].soCuoi>=100) td[i].pay=(int)((100-td[i].soDau)*500+(td[i].soCuoi-100)*1000);
		else if(td[i].soDau>100) td[i].pay=(int)(td[i].soCuoi-td[i].soDau)*1000;
		else if(td[i].soCuoi<=100) td[i].pay=(int)(td[i].soCuoi-td[i].soDau)*500;
		if(td[i].pay<0){
			printf("nhap sai, moi nhap lai.\n");
			goto Nhap1;
		}
	}
	printf("\nho ten\ttien dien\n");
	for(i=0;i<n;i++){
		printf("%s\t%d Vnd\n",td[i].hoTen,td[i].pay);
	}
	//BÀI 2
	char s[100];
	int j=0,b[100];
	printf("\nnhap xau: ");
	fflush(stdin);
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]=='A'){
			b[j]=i+1;
			j++;
		}
	}
	int count=j;
	if(j==0) printf("khong xuat hien ki tu 'A' trong xau.");
	else{
		printf("ki tu 'A' xuat hien %d lan trong xau o vi tri so ",j);
		for(i=0;i<count;i++){
			printf("%d ",b[i]);
		}
	}
	return 0;
}