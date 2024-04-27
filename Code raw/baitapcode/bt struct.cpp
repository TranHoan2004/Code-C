#include<stdio.h>
#include<conio.h>
struct sinhVien 
{	
	char masv[100];
	char hoten[100];
	char gioitinh[100];
	int namsinh;
	float diemtb;
};
int main(){
	struct sinhVien sv[100];
	int i,n;
	printf("nhap so sv: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("nhap thong tin sinh vien so %d\n",i+1);
		fflush(stdin);
		printf("Ma sinh vien: ");gets(sv[i].masv);
		printf("Ho ten: ");gets(sv[i].hoten);
		printf("Nam sinh: ");scanf("%d",&sv[i].namsinh);fflush(stdin);
		printf("Gioi tinh: ");gets(sv[i].gioitinh);
		printf("Diem trung binh: ");scanf("%f",&sv[i].diemtb);
	}
	printf("In danh sach:\n");
	for(i=0;i<n;i++){
		printf("%s\t%s\t%d\t%s\t%.2f\n",sv[i].masv,sv[i].hoten,sv[i].namsinh,sv[i].gioitinh,sv[i].diemtb);
	}
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(sv[i].diemtb<sv[j].diemtb){
				sv[n]=sv[j];
				sv[j]=sv[i];
				sv[i]=sv[n];
			}
		}
	}
	printf("Danh sach xep theo diem trung binh: \n");
	for(i=0;i<n;i++){
		printf("%s\t%s\t%d\t%s\t%.2f\n",sv[i].masv,sv[i].hoten,sv[i].namsinh,sv[i].gioitinh,sv[i].diemtb);
	}
}