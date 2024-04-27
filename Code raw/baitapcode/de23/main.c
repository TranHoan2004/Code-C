/*
Câu 1
Viết chương trình nhập tháng, năm bất kỳ từ bàn phím.
 Hãy cho biết tháng này trong năm có bao nhiêu ngày.
Câu 2
Lập hàm kiểm tra số nguyên lẻ, kiểm tra số nguyên chẵn.
Áp dụng viết chương trình nhập một mảng nguyên một chiều.
 In ra màn hình các số nguyên chẵn và các số nguyên lẻ trên hai dòng khác nhau của một mảng nguyên một chiều.
*/

#include<stdio.h>

int kiemTra(int n)
{
    if(n%2==0) return 2;
    else return 1;
}

int main()
{
    //BÀI 1
    int thang,nam;
    a:
    printf("moi nhap thang: ");scanf("%d",&thang);
    printf("moi nhap nam: ");scanf("%d",&nam);
    if(thang<1||thang>12||nam<0)
    {
        printf("khong hop le, moi nhap lai!");
        goto a;
    }
    switch(thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        {
            printf("thang co 31 ngay.\n");break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        printf("thang co 30 ngay.\n");break;
    default:
        {
            if(nam%4==0&&nam%100!=0||nam%400==0)
            {
                printf("thang co 29 ngay.\n");break;
            }
            else printf("thang co 28 ngay.\n");break;
        }
    }
    //BÀI 2
    int i,n,l[100],c[100],a[100];
    int le=0,chan=0;
    b:
    printf("nhap so phan tu mang: ");scanf("%d",&n);
    if(n<=0)
    {
        printf("loi!\n");
        goto b;
    }
    printf("nhap du lieu cho mang:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        if(kiemTra(a[i])==2)
        {
            c[chan]=a[i];
            chan++;
        }
        else if(kiemTra(a[i])==1)
        {
            l[le]=a[i];
            le++;
        }
    }
    int n1=le,n2=chan;
    if(chan!=0)
    {
        printf("phan tu chan: ");
        for(chan=0;chan<n2;chan++)
        {
            printf("%d ",c[chan]);
        }
        printf("\n");
    }
    else printf("khong co phan tu chan.\n");
    if(le!=0)
    {
        printf("phan tu le: ");
        for(le=0;le<n1;le++)
        {
            printf("%d ",l[le]);
        }
        printf("\n");
    }
    else printf("khong co phan tu le.\n");
    return 0;
}
