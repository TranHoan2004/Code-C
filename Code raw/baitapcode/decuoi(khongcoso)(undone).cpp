/*
1.	Xây dựng cấu trúc  học sinh gồm các thông tin: họ tên, điểm trung bình (ĐTB).
   a.	Viết chương trình nhập vào một danh sách học sinh. 
   b.	In ra danh sách các học sinh đạt kết quả khá (điểm trung bình >=7).
   c.	Tìm và in ra học sinh có điểm trung bình cao nhất.
   d.	In ra danh sách học sinh có kết quả kém (ĐTB<5).
   e.	In ra danh sách học sinh có kết quả giỏi (ĐTB>=8).
   f.	Sắp xếp danh sách theo họ tên, in lại danh sách sau khi sắp xếp.
2.	Nhập một dãy số nguyên từ file input.dat sắp xếp theo thứ tự tăng dần rồi ghi vào file output.dat
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct hocSinh
{
	char hoten[100];
	float diemtb;
};

int main(){
	//BÀI 1
	struct hocSinh hs[100];
	int i,n,j;
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
	fflush(stdin);
	//BÀI 2
	FILE *p,*q;
	int a[100];
	printf("nhap so so nguyen: ");
	n:
	scanf("%d",&n);
	if(n<=0){
		printf("khong hop le, moi nhap lai: ");
		goto n;
	}
	p=fopen("input.dat","w");
	if(p==NULL){
		printf("LOI!");
		return 0;
	}
	printf("nhap day so: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	fprintf(p,"%d\n",n);
	for(i=0;i<n;i++){
		fprintf(p,"%d",a[i]);
	}
	q=fopen("output.dat","w");
	p=fopen("input.dat","r");
	if(p==NULL){
		printf("LOI!");
		return 0;
	}
	fscanf(p,"%d",n);
	for(i=0;i<n;i++){
		fscanf(p,"%d",a[i]);
	}
	int tam;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	for(i=0;i<n;i++){
		fprintf(q,"%d",a[i]);
		printf("%d ",a[i]);
	}
	fclose(p);
	fclose(q);
	return 0;
}