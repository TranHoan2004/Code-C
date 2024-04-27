/*
Câu 1
Nhập số nguyên dương x.
 Cho biết số nguyên dương này có bao nhiêu chữ số.
  Tính tổng: các chữ số của số nguyên này(Vd:  263 có 3 chữ số và tổng=2+6+3=11)
Câu 2
Nhập dãy số nguyên dương. In ra dãy số này. Xét xem đây có phải là dãy số tăng hay không?
*/

#include<stdio.h>

int main(){
    //BÀI 1
    int x,sum=0,count=0;
    n:
    printf("nhap so nguyen duong x = ");
    scanf("%d",&x);
    if(x<=0){
        printf("so da nhap khong hop le, moi nhap lai!\n");
        goto n;
    }
    while(x!=0){
        sum+=x%10;
        x/=10;
        count++;
    }
    printf("so da nhap co %d chu so, tong cac chu so la %d.\n",count,sum);
    //BÀI 2
    int n,i,a[100],tam=0;
    m:
    printf("nhap so so hang: ");
    scanf("%d",&n);
    if(n<=0){
        printf("nhap sai, moi nhap lai!\n");
        goto m;
    }
    printf("nhap day so: \n");
    for(i=0;i<n;i++){
        scanf("%d",a+i);
    }
    printf("day so da nhap: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        if(a[i+1]<a[i]) tam++;
    }
    if(tam==0) printf("\nday so tang!");
    else printf("\nday so khong phai la day so tang!");
    return 0;
}
