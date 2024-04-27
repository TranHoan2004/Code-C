/*
Câu 1
Nhập từ bàn phím một mảng số nguyên (kích thước mảng n:1≤n≤10 ).
 In ra màn hình các phần tử chia hết cho 3,
  in ra trung bình cộng của các phần tử này.
Câu 2
Nhập một xâu ký tự.
 Đổi xâu thành xâu chữ thường,
  Từ đó in xâu mới ra màn hình.
   Và in xâu đảo ngược của xâu đó.
*/

#include<stdio.h>
#include<string.h>

int main(){
    //BÀI 1
    int n,i,a[10],sum=0,count=0;
    N:
    printf("nhap n = ");
    scanf("%d",&n);
    if(n<1||n>10){
        printf("khong dung du kien de cho!\nnoi nhap lai:\n");
        goto N;
    }
    for(i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",a+i);
        if(a[i]%3==0){
            sum+=a[i];
            count++;
        }
    }
    if(count==0) printf("khong co phan tu chia het cho 3!\n");
    else{
        printf("phan tu chia het cho 3 gom: ");
        for(i=0;i<n;i++){
            if(a[i]%3==0) printf("%d ",a[i]);
        }
        printf("\ntrung binh cong cua cac phan tu: %d\n",sum/count);
    }
    //BÀI 2
    char s[100];
    printf("nhap xau: ");
    M:
    fflush(stdin);
    gets(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]>=65&&s[i]<=90) s[i]+=32;
    }
    printf("%s\n",s);
    printf("xau dao nguoc: ");
    for(i=strlen(s);i>=0;i--){
        printf("%c",s[i]);
    }
    return 0;
}

