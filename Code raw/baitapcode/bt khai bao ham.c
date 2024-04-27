#include<stdio.h>
#include<math.h>
int max(int a,int b){
    if(a>b) printf("%d",a);
    else printf("so lon hon la %d\n",b);
    return 0;
}
int giaiThua(int n){
    int i,gt=1;
    if(n==0) printf("1\n");
    else if(n<0) return 0;
    else {
        for(i=1;i<=n;i++){
            gt*=i;
        }
        printf("%d giai thua bang %d\n",n,gt);
    }
}
long long mu(int c,int d){
    if(c==0&&d==0) printf("Math error!\n");
    else if(d==0) printf("1");
    else {
        int i,lt=1;
        for(i=1;i<=d;i++){
            lt*=c;
        }
        printf("%d\n",lt);
    }
}
long long kiemTraSnt(long long m){
    long long i;
    if(m==2 || m==3){
        printf("%d la so nguyen to\n",m);
    }
    else if(m==0 || m==1) printf("%d khong phai la so nguyen to\n",m);
    else if(m<0) return 0;
    else{
        for(i=2;i<=sqrt(m);i++){
            if(m%i==0){
                printf("%d khong phai so nguyen to\n",m);
                return 0;
            }
        }
    printf("%d la so nguyen to\n",m);
    }
}

int main(){
    mu(2,3);
    max(2,3);
    giaiThua(3);
    kiemTraSnt(39916800);
}