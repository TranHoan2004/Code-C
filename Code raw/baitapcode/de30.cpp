/*
Đề 30
Câu 1 
Nhập vào tên một hàng hóa, số lượng và đơn giá. Tính thành tiền và thuế VAT (10%) thành tiền. In lại các thông tin lên  màn hình.
Câu 2 
Xây dựng cấu trúc  học sinh gồm các thông tin: họ tên, điểm trung bình(DTB).
a.	Viết chương trình nhập vào một danh sách học sinh. 
b.	In ra danh sách các học sinh đạt kết quả khá (DTB >=7).
c.	Tìm và in ra học sinh có điểm trung bình cao nhất
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct hangHoa{
	char tenHang[100];
	int soLuong;
	int donGia;
	int thanhTien;
	int thueVAT;
	int tong;
};

struct hocSinh{
	char hoten[20];
	float diemtb;
};

int main(){
	//BÀI 1
	int n,i,sum=0;
	N:
	printf("nhap so mat hang ban da mua: ");
	scanf("%d",&n);
	if(n<=0){
		printf("khong hop le, moi nhap lai.\n");
		goto N;
	}
	printf("moi nhap thong tin hang hoa: \n");
	struct hangHoa hh[100];
	for(i=0;i<n;i++){
		printf("thong tin mon hang so %d",i+1);
		fflush(stdin);
		printf("\nten hang: ");gets(hh[i].tenHang);
		printf("so luong: ");scanf("%d",&hh[i].soLuong);
		printf("don gia: ");scanf("%d",&hh[i].donGia);
		hh[i].thanhTien=hh[i].soLuong*hh[i].donGia;
		hh[i].thueVAT=(int)hh[i].thanhTien/10;
		hh[i].tong=hh[i].thanhTien+hh[i].thueVAT;
	}
	printf("STT\tTen hang\tSo luong\tDon gia\tThanh tien\tThue VAT\tTong tien\n");
	for(i=0;i<n;i++){
		printf("%d\t%s%14d%17d%10d%15d%17d\n",i+1,hh[i].tenHang,hh[i].soLuong,hh[i].donGia,hh[i].thanhTien,hh[i].thueVAT,hh[i].tong);
		sum+=hh[i].tong;
	}
	printf("tong so tien quy khach phai tra la: %d\t",sum);
	//BÀI 2
	int j;
	struct hocSinh hs[100];
	printf("\nnhap so hoc sinh: ");
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
	return 0;
}