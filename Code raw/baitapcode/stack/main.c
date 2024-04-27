#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int length=0;
int stack[100];

void push(int n)
{
    stack[length]=n;
    length++;
}

void pop()
{
    if(length==0)
    {
        printf("khong co phan tu de xoa");
    }
    stack[length--]=NULL;
}

void in()
{
    if(length==0) printf("khong co du lieu");
    for(int i=length-1;i>=0;i--)
    {
        if(stack[i]>=10&&stack[i]<16)
        {
            printf("%X",stack[i]);
        }
        else printf("%d",stack[i]);
        pop();
    }
    printf("\n");
}

void ccs2(int n)
{
    while(n)
    {
        push(n%2);
        n/=2;
    }
}

void ccs8(int n)
{
    while(n)
    {
        push(n%8);
        n/=8;
    }
}

void ccs16(int n)
{
    while(n)
    {
        push(n%16);
        n/=16;
    }
}

int main()
{
    int choice,n;
    while(1)
    {
        printf("1.chuyen doi co so 2\n");
        printf("2.chuyen doi co so 8\n");
        printf("3.chuyen doi co so 16\n");
        printf("4.thoat\n");
        printf("moi nhap lua chon:");
        scanf("%d",&choice);
        system("cls");
        if(choice==4) break;
        else if(choice==1)
        {
            printf("nhap so can chuyen doi:");
            scanf("%d",&n);
            ccs2(n);
            in();
        }
        else if(choice==2)
        {
            printf("nhap so can chuyen doi:");
            scanf("%d",&n);
            ccs8(n);
            in();
        }
        else if(choice==3)
        {
            printf("nhap so can chuyen doi:");
            scanf("%d",&n);
            ccs16(n);
            in();
        }
    }
    return 0;
}
