/*
Đề 8
Câu 1
Lập hàm tìm ước số chung lớn nhất và bội số chung nhỏ nhất của hai số nguyên bất kì.
 Áp dụng viết chương trình tìm ước số chung lớn nhất và bội số chung nhỏ nhất của 4 số nguyên được nhập từ bàn phím.
Câu 2 
Nhập một dãy kí tự. Sắp xếp dãy theo chiều tăng của thứ tự từ điển, và in ra dãy được sắp xếp.
 Tìm xem có kí tự e trong dãy hay không? Nếu có thì xuất hiện bao nhiêu lần.
*/
#include<stdio.h>
#include<string.h>
int ucln2s(int a,int b){
	int ucln;
	if(a==0||b==0) ucln=a+b;
	else if(a!=0&&b!=0){
		while(a!=b){
			if(a<b) b=b-a;
			else a=a-b;
		}
		ucln=a;
	}
	return ucln;
}

int ucln4s(int a,int b,int c,int d){
	return ucln2s(ucln2s(ucln2s(a,b),c),d);
}

int bcnn2s(int a,int b){
	int bcnn=(a*b)/ucln2s(a,b);
	return bcnn;
}

int bcnn4s(int a,int b,int c,int d){
	return bcnn2s(bcnn2s(bcnn2s(a,b),c),d);
}

int main(){
	//BÀI 1
	int a,b,c,d;
	printf("tim uoc chung lon nhat va boi chung nho nhat cua 2 so.\nmoi nhap 2 so: ");
	scanf("%d%d",&a,&b);
	printf("uoc chung lon nhat cua 2 so da nhap la: %d.\n",ucln2s(a,b));
	printf("boi chung nho nhat cua 2 so vua nhap la: %d.\n",bcnn2s(a,b));
	
	printf("tim uoc chung lon nhat cua 4 so.\nmoi nhap 4 so can tim uoc chung lon nhat: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("uoc chung lon nhat cua 4 so vua nhap la: %d.\n",ucln4s(a,b,c,d));
	printf("boi chung nho nhat cua 4 so vua nhap la: %d.\n",bcnn4s(a,b,c,d));
	fflush(stdin);
	//BÀI 2
	char s[100],x=NULL;
	int i,j,count=0;
	printf("nhap chuoi ki tu: ");
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		if(s[i]=='e') count++;
	}
	for(i=0;i<strlen(s);i++){
		for(j=0;j<strlen(s);j++){
			if(s[i]<s[j]){
				x=s[i];
				s[i]=s[j];
				s[j]=x;
			}
		}
	}
	printf("chuoi ki tu theo chieu tang dan cua thu tu tu dien : %s.\n",s);
	if(count>0) printf("co xuat hien ki tu e trong day, xuat hien %d lan.",count);
	return 0;
}