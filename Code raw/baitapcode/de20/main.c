/*
Câu 1
Giải và biện luận bất phương trình bậc nhất ax+b < 0
Câu 2
Lập hàm tính n!. Áp dụng viết chương trình tính biểu thức:
s=1+1/2!+1/3!+…+1/n!
Với 0<n<=7;
*/

#include<stdio.h>

int gt(int n)
{
    int giaiThua=1;
    for(int i=1;i<=n;i++)
    {
        giaiThua*=i;
    }
    return giaiThua;
}

int main()
{
    //BÀI 1
    int a,b;
    printf("moi nhap a = ");scanf("%d",&a);
    printf("moi nhap b = ");scanf("%d",&b);
    if(a==0)
    {
        if(b>=0) printf("bat phuong trinh vo nghiem.\n");
        else printf("bat phuong trinh vo so nghiem.\n");
    }
    else
    {
        printf("tap nghiem cua bat phuong trinh la: S = {x|x<-%d/%d}\n",b,a);
    }
    //BÀI 2
    float sum=0;
    int i,n;
    m:
    printf("moi nhap n = ");
    scanf("%d",&n);
    if(n<=0||n>7)
    {
        printf("khong dung du kien de cho, moi nhap lai!\n");
        goto m;
    }
    for(i=0;i<n;i++)
    {
        sum+=(float)1/gt(i+1);
    }
    printf("s = %.3f",sum);
    return 0;
}
