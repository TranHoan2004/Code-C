/*
Câu 1
Viết chương trình tính biểu thức:
S =1+1/2^2+1/3^2+...+1/n^2 với 0<n<=100
Câu 2
Viết chương trình tính tổng các đường viền(là các phần tử nằm trên hàng 0 hoặc cột 0 hoặc hành n-1 hoặc cột n-1),
 tổng các đường chéo chính, đường chéo phụ của một ma trận thực vuông.
*/

#include<stdio.h>

float sum(int n)
{
    //BÀI 1
    float s=0;
    for(int i=1;i<=n;i++)
    {
        s+=(float)1/(i*i);
    }
    return s;
}

int main()
{
    int n;
    z:
    printf("nhap n = ");
    scanf("%d",&n);
    if(n<=0||n>100)
    {
        printf("math error!");
        goto z;
    }
    printf("%.2f\n",sum(n));
    fflush(stdin);
    //BÀI 2
    int i,j,a[50][50],m,u=0;
    printf("nhap cap ma tran vuong: ");
    scanf("%d",&m);
    printf("nhap du lieu cho ma tran:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("ma tran da nhap:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0||i==m-1)
            {
                u+=a[i][j];
            }
            if(j==0||j==m-1)
            {
                u+=a[i][j];
            }
        }
    }
    u=u-(a[0][0]+a[m-1][0]+a[m-1][m-1]+a[0][m-1]);
    printf("tong duong vien cua ma tran la: %d",u);
    //XEM QUA ĐỀ 13 CÂU 2 ĐỂ TÍNH TỔNG ĐƯỜNG CHÉO CHÍNH VÀ ĐƯỜNG CHÉO PHỤ
    return 0;
}
