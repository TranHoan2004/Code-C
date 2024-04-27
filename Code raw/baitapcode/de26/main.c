/*
Câu 1
Nhập số n nguyên dương. Tính:
s=2.4.6....n nếu n chẵn
s=1.3.5....n nếu n lẻ
Câu 2
Nhập một xâu ký tự từ bàn phím.
 Đếm số ký tự là chữ, là số, là trắng, là khác.
  Cho biết loại nào nhiều nhất.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //BÀI 1
    int n,s=1,i;
    printf("moi nhap n = ");
    scanf("%d",&n);
    if(n%2==0){
        for(i=2;i<=n;i+=2){
            s*=i;
        }
    }
    else{
        for(i=1;i<=n;i+=2){
            s*=i;
        }
    }
    printf("%d\n",s);
    //BÀI 2
    char c[50];
    int word=0,number=0,etc=0;
    printf("moi nhap xau: ");
    fflush(stdin);
    gets(c);
    for(i=0;i<strlen(c);i++){
        if(c[i]>='a'&&c[i]<='z'||c[i]>='A'&&c[i]<='Z') word++;
        else if(c[i]>='0'&&c[i]<='9') number++;
        else etc++;
    }
    int max=etc;
    printf("so ki tu la chu la %d, so ki tu la so la %d, so ki tu la ki tu khac la %d\n",word,number,etc);
    if(number>max) max=number;
    if(word>max) max=word;
    if(max==etc) printf("ki tu xuat hien nhieu nhat la ki tu khac");
    else if(max==word) printf("ki tu xuat hien nhieu nhat la ki tu chu");
    else if(max==number) printf("ki tu xuat hien nhieu nhat la ki tu so");
    return 0;
}
