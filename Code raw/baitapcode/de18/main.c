/*
Câu 1
Nhập số nguyên (0≤n≤10), số thực x. Tính
a)	S1 = 1 +x^2 + ….+ x^n
b)	S2 = căn S1
Câu 2 (4 điểm)
Xây dựng kiểu dữ liệu cấu trúc hình chữ nhật có các thành phần dữ liệu là chiều dài, chiều rộng, chu vi, diện tích.
 Viết chương trình nhập dữ liệu cho một mảng cấu trúc hình chữ nhật, in ra diện tích và chu vi của các hình chữ nhật.
*/

#include<stdio.h>
#include<math.h>

struct ChuNhat
{
    float chieuDai;
    float chieuRong;
    float chuVi;
    float dienTich;
};

int main()
{
    //BÀI 1
    int n,i,count=0;
    float x,y=1,s1=1;
    n:
    printf("nhap n = ");
    scanf("%d",&n);
    if(n<0&&n>10)
    {
        printf("khong hop le, moi nhap lai!\n");
        goto n;
    }
    printf("nhap x = ");
    scanf("%f",&x);
    for(i=0;i<n;i++)
    {
        while(count<=i)
        {
            y*=x;
            count++;
        }
        s1+=y;
        y=1;
        count=0;
    }
    printf("s1 = %.2f\ns2 = %.2f\n",s1,sqrt(s1));
    //BÀI 2
    struct ChuNhat cn;
    printf("nhap chieu dai: ");scanf("%f",&cn.chieuDai);
    m:
    printf("nhap chieu rong: ");scanf("%f",&cn.chieuRong);
    if(cn.chieuDai<cn.chieuRong)
    {
        printf("chieu rong phai nho hon chieu dai, moi nhap lai!");
        goto m;
    }
    else if(cn.chieuDai<=0||cn.chieuRong<0)
    {
        printf("LOI!");
        return 0;
    }
    cn.chuVi=(cn.chieuDai+cn.chieuRong)*2;
    cn.dienTich=cn.chieuDai*cn.chieuRong;
    printf("chu vi hinh chu nhat la: %.2f, dien tich hinh chu nhat la: %.2f",cn.chuVi,cn.dienTich);
    return 0;
}
