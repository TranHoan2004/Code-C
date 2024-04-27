#include<stdio.h>
#include<conio.h>
#include<string.h>
struct hocSinh
{
	char hoten[100];
	float diemtb;
};
int main(){
	struct hocSinh hs[100];
	int i,n;
	printf("nhap so hoc sinh: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("nhap thong tin hoc sinh %d\n",i+1);
		fflush(stdin);
		printf("ho ten: ");gets(hs[i].hoten);
		printf("diem trung binh: ");scanf("%f",&hs[i].diemtb);
	}
	printf("in danh sach: \n");
	for(i=0;i<n;i++){
		printf("%s\t%.2f\n",hs[i].hoten,hs[i].diemtb);
	}
	printf("hoc sinh kha: \n");
	for(i=0;i<n;i++){
		if(hs[i].diemtb>=7) printf("%s\t%.2f\n",hs[i].hoten,hs[i].diemtb);
	}
	hs[n]=hs[0];
	for(i=0;i<n;i++){
		if(hs[i].diemtb>hs[n].diemtb) hs[n]=hs[i];
	}
	printf("hoc sinh co diem trung binh cao nhat la: ");
	printf("%s voi diem trung binh la %.2f diem\n",hs[n].hoten,hs[n].diemtb);
	printf("hoc sinh kem: \n");
	for(i=0;i<n;i++){
		if(hs[i].diemtb<5) printf("%s\t%.2f\n",hs[i].hoten,hs[i].diemtb);
	}
	printf("hoc sinh gioi: \n");
	for(i=0;i<n;i++){
		if(hs[i].diemtb>=8) printf("%s\t%.2f\n",hs[i].hoten,hs[i].diemtb);
	}
	printf("in danh sach theo ho ten: \n");
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(strcmp(hs[i].hoten, hs[j].hoten)<0){
				hs[n+1]=hs[j];
				hs[j]=hs[i];
				hs[i]=hs[n+1];
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\t%.2f\n",hs[i].hoten,hs[i].diemtb);
	}
}