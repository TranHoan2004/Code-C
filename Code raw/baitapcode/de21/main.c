/*
Câu 1
Giải và biện luận phương trình trùng phương: ax4 + bx2 + c = 0. (a≠0)
Câu 2
Lập hàm kiểm tra các số hoàn hảo(là số có tổng các ước của nó bằng chính nó).
 Áp dụng viết chương trình in ra các số hoàn hảo và vị trí của chúng trong một ma trận nguyên,
  tính tổng các số đó.
*/

#include<stdio.h>
#include<math.h>

int shh(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n&&n!=0) return n;
    else return -1;
}

int main()
{
    //BÀI 1(ĐÃ GIẢI CẢ TRƯỜNG HỢP SUY BIẾN)
    float a,b,c;
    printf("moi nhap he so a, b, c: \n");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0)
    {
        if(b==0)
        {
            if(c==0) printf("phuong trinh vo so nghiem.\n");
            else printf("phuong trinh vo nghiem.\n");
        }
        else
        {
            if(-c/b<0) printf("phuong trinh vo nghiem.\n");
            else if(c==0) printf("phuong trinh co 1 nghiem x = 0.\n");
            else printf("phuong trinh co 2 nghiem phan biet x1 = %.2f, x2 = %.2f",sqrt(-c/b),-sqrt(-c/b));
        }
    }
    else
    {
        float delta=b*b-4*a*c;
        if(delta<0) printf("phuong trinh vo nghiem.\n");
        else if(delta==0)
        {
            if((float)-b/(2*a)>0) printf("phuong trinh co 2 nghiem phan biet la: x1 = %.2f, x2 = %.2f\n",sqrt(-b/(2*a)),-sqrt(-b/(2*a)));
            else if((float)-b/(2*a)==0) printf("phuong trinh co nghiem duy nhat x = 0.\n");
            else printf("phuong trinh vo nghiem.\n");
        }
        else
        {
            printf("cac nghiem cua phuong trinh: ");
            if((-b+sqrt(delta))/(2*a)>0&&(-b-sqrt(delta))/(2*a)<0) printf("x = %.2f, x = %.2f\n",sqrt((-b+sqrt(delta))/(2*a)),-sqrt((-b+sqrt(delta))/(2*a)));
            else if((-b+sqrt(delta))/(2*a)<0&&(-b-sqrt(delta))/(2*a)>0) printf("x = %.2f, x = %.2f\n",sqrt((-b-sqrt(delta))/(2*a)),-sqrt((-b-sqrt(delta))/(2*a)));
            else if((-b+sqrt(delta))/(2*a)>0&&(-b+sqrt(delta))/(2*a)>0) printf("x = %.2f, x = %.2f, x = %.2f, x = %.2f\n",sqrt((-b-sqrt(delta))/(2*a)),-sqrt((-b-sqrt(delta))/(2*a)),sqrt((-b+sqrt(delta))/(2*a)),-sqrt((-b+sqrt(delta))/(2*a)));
            else if((-b+sqrt(delta))/(2*a)==0&&(-b-sqrt(delta))/(2*a)==0) printf("x = 0\n");
            else if((-b+sqrt(delta))/(2*a)>0&&(-b-sqrt(delta))/(2*a)==0) printf("x = %.2f, x = %.2f, x = 0\n",sqrt((-b+sqrt(delta))/(2*a)),-sqrt((-b+sqrt(delta))/(2*a)));
            else if((-b+sqrt(delta))/(2*a)==0&&(-b-sqrt(delta))/(2*a)>0) printf("x = %.2f, x = %.2f, x = 0\n",sqrt((-b-sqrt(delta))/(2*a)),-sqrt((-b-sqrt(delta))/(2*a)));
            else if((-b+sqrt(delta))/(2*a)<0&&(-b-sqrt(delta))/(2*a)==0) printf("x = 0\n");
            else if((-b+sqrt(delta))/(2*a)==0&&(-b-sqrt(delta))/(2*a)<0) printf("x = 0\n");
            else printf("phuong trinh vo nghiem.\n");

        }
    }
    //BÀI 2
    int i,j,k=0,h=0,l=0,m,n,p[20][20],q[400],hang[400],cot[400],sum=0;
    m:
    printf("nhap so hang: ");scanf("%d",&m);
    printf("nhap so cot: ");scanf("%d",&n);
    if(m<=0||n<=0)
    {
        printf("khong hop le, moi nhap lai!\n");
        goto m;
    }
    printf("nhap du lieu:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&p[i][j]);
        }
    }
    printf("ma tran da nhap la:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(shh(p[i][j])!=-1)
            {
                q[k]=p[i][j];
                k++;
                hang[h]=i+1;
                h++;
                cot[l]=j+1;
                l++;
                sum+=p[i][j];
            }
        }
    }
    int temp=k;
    h=0,l=0;
    printf("so hoan hao trong ma tran la: \n");
    for(k=0;k<temp;k++)
    {
        printf("%d o hang %d cot %d\n",q[k],hang[h],cot[l]);
        h++;
        l++;

    }
    printf("\ntong cac so hoan hao la: %d",sum);
    return 0;
}
