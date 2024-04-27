/*
Đề 5
câu 1.
Viết chương trình tính tổng s:=12 + 22 + 32 + …… + n2 với n là số tự nhiên được nhập từ bàn phím (nếu n<=0 thì chương trình yêu cầu nhập lại).
Câu 2 
Viết chương trình nhập một xâu kí tự, cho biết:
a)	Có bao nhiêu kí tự dạng chữ, dạng số, trắng và các kí tự đặc biệt.
b)	Kí tự dạng nào là nhiều nhất?
*/
#include<stdio.h>
#include<string.h>
int main(){
	//BÀI 1
	int n,i,s=0;
	Nhap:
	printf("moi nhap n = ");
	scanf("%d",&n);
	if(n>=0){
		for(i=1;i<=n;i++){
			s+=i*i;
		}
		printf("tong s = %d",s);
	}
	else{
		printf("n khong hop le, moi nhap lai.");
		goto Nhap;
	}
	//BÀI 2
	char x[100];
	int count=0,ktc=0,kts=0,ktt=0,ktdb=0,max=0;
	printf("\nnhap xau: ");
	fflush(stdin);
	gets(x);
	for(i=0;i<strlen(x);i++){
		if(x[i]==' ') ktt++;
		else if(x[i]>='a'&&x[i]<='z'||x[i]>='A'&&x[i]<='Z')	ktc++;
		else if(x[i]>='0'&&x[i]<='9') kts++;
		else ktdb++;
	}
	if(ktt==ktc&&ktt==kts&&ktt==ktdb&&ktc==kts&&ktc==ktdb&&kts==ktdb) printf("so luong cac loai ki tu bang nhau.");
	else if(ktt==ktc&&ktt==kts&&ktc==kts&&kts>ktdb) printf("loai ki tu xuat hien nhieu nhat la ki tu chu, ki tu so, ki tu trang voi so lan xuat hien bang nhau.");
	else if(ktt==ktdb&&ktt==kts&&ktdb==kts&&kts>ktc) printf("loai ki tu xuat hien nhieu nhat la ki tu so, ki tu trang, ki tu dac biet voi so lan xuat hien bang nhau.");
	else if(ktdb==ktc&&ktdb==kts&&ktc==kts&&kts>ktt) printf("loai ki tu xuat hien nhieu nhat la ki tu chu, ki tu so, ki tu dac biet voi so lan xuat hien bang nhau.");
	else if(ktt==ktdb&&ktt==ktc&&ktc==ktdb&&ktc>kts) printf("loai ki tu xuat hien nhieu nhat la ki tu trang, ki tu dac biet, ki tu chu voi so lan xuat hien bang nhau.");
	else if(ktt==ktc&&ktt>kts) printf("loai ki tu xuat hien nhieu nhat la ki tu trang, ki tu chu.");
	else if(ktt==kts&&ktt>ktc) printf("loai ki tu xuat hien nhieu nhat la ki tu trang, ki tu so.");
	else if(ktt==ktdb&&ktt>ktc) printf("loai ki tu xuat hien nhieu nhat la ki tu trang, ki tu dac biet.");
	else if(ktc==kts&&ktc>ktt) printf("loai ki tu xuat hien nhieu nhat la ki tu chu, ki tu so.");
	else if(ktc==ktdb&&ktc>ktt) printf("loai ki tu xuat hien nhieu nhat la ki tu chu, ki tu dac biet.");
	else if(kts==ktdb&&kts>ktt) printf("loai ki tu xuat hien nhieu nhat la ki tu so, ki tu dac biet.");
	else{
		if(max<ktc) max=ktc;
		if(max<kts) max=kts;
		if(max<ktt) max=ktt;
		if(max<ktdb) max=ktdb;
		
		if(max==ktc) printf("loai ki tu xuat hien nhieu nhat la ki tu chu.");
		else if(max==kts) printf("loai ki tu xuat hien nhieu nhat la ki tu so");
		else if(max==ktt) printf("loai ki tu xuat hien nhieu nhat la ki tu trang.");
		else if(max==ktdb) printf("loai ki tu xuat hien nhieu nhat la ki tu dac biet.");
		
	}
	
	return 0;
}