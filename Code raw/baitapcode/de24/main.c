/*
Câu 1
Viết chương trình nhập dữ liệu cho một sinh viên bao gồm các thông tin sau:
 mã sinh viên (masv), họ tên sinh viên (hoten), lớp (lop), điểm toán (dtoan), điểm tin (dly), điểm tiếng Anh (dta).
  Tính điểm trung bình của sinh viên này . Sau đó in ra màn hình giấy báo điểm của sinh viên này theo mẫu sau:
Giấy báo điểm sơ kết học kỳ II, năm học 2004-2005
Mã sinh viên	Họ tên	Lớp	Điểm toán	Điểm tin	Điểm TA	Điểm TB
….	….	….
Câu 2
Viết chương trình nhập một ma trận thực. Tính tổng các phần tử trên các cột của ma trận. Tìm cột có tổng lớn nhất.
*/

#include<stdio.h>
#include<conio.h>

struct sinhVien
{
    int masv;
    char hoten[30];
    char lop[10];
    float dtoan;
    float dtin;
    float dta;
    float dtb;
};

int main()
{
    //BÀI 1
    int n,i;
    struct sinhVien sv[100];
    y:
    printf("Nhap so sinh vien: ");scanf("%d",&n);
    if(n<=0)
    {
        printf("so sinh vien khong hop le, moi nhap lai!");
        goto y;
    }
    for(i=0;i<n;i++)
    {
        printf("nhap thong tin sinh vien so %d:\n",i+1);
        printf("ma sinh vien: ");scanf("%d",&sv[i].masv);
        fflush(stdin);
        printf("ho ten: ");gets(sv[i].hoten);
        printf("lop: ");gets(sv[i].lop);
        printf("diem toan: ");scanf("%f",&sv[i].dtoan);
        printf("diem tin: ");scanf("%f",&sv[i].dtin);
        printf("diem tieng anh: ");scanf("%f",&sv[i].dta);
        sv[i].dtb=(sv[i].dtoan+sv[i].dtin+sv[i].dta)/3;
    }
    printf("\nGiay bao diem so ket hoc ki II, nam hoc 2004-2005\n");
    printf("Ma sinh vien\tHo ten\t\tLop\t\tDiem toan\tDiem tin\tDiem tieng anh\tDiem TB\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",sv[i].masv,sv[i].hoten,sv[i].lop,sv[i].dtoan,sv[i].dtin,sv[i].dta,sv[i].dtb);
    }
    //BÀI 2
    float a[30][30],b[30];
    int hang,j,cot,k;
    z:
    printf("nhap so hang: ");scanf("%d",&hang);
    printf("nhap so cot: ");scanf("%d",&cot);
    if(hang<=0||cot<=0)
    {
        printf("loi!");
        goto z;
    }
    printf("nhap du lieu cho ma tran:\n");
    for(j=0;j<hang;j++)
    {
        for(k=0;k<cot;k++)
        {
            printf("a[%d][%d] = ",j,k);
            scanf("%f",&a[j][k]);
        }
    }
    for(k=0;k<30;k++)
    {
        b[k]=0;
    }
    printf("ma tran da nhap:\n");
    for(j=0;j<hang;j++)
    {
        for(k=0;k<cot;k++)
        {
            printf("%.2f ",a[j][k]);
            b[k]+=a[j][k];
        }
        printf("\n");
    }
    int max=b[0],maxCot=1;
    for(k=0;k<cot;k++)
    {
        printf("tong cot %d la %.2f\n",k+1,b[k]);
        if(b[k]>max) maxCot=k+1;
    }
    printf("cot co tong lon nhat la cot %d",maxCot);
    return 0;
}
