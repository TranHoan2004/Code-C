/*
Câu 1
Viết chương trình tính toán: cộng, trừ, nhân, chia cho hai số thực bất kỳ được nhập từ bàn phím.
 (Phép toán được lựa chọn từ bàn phím)
Câu 2
Viết chương trình nhập mảng kí tự một chiều, kiểm tra xem mảng này có đối xứng hay không?
 Nếu không hãy đảo ngược mảng này và in ra màn hình.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    //BÀI 1
	float a,b;
	char c;
	printf("moi nhap 2 so a va b:\n");
	scanf("%f%f",&a,&b);
	printf("nhap phep toan ban muon thuc hien (+; -; *; /): ");
	fflush(stdin);
	scanf("%c",&c);
	if(c=='+') printf("%f + %f = %.2f",a,b,a+b);
	else if(c=='-') printf("%f - %f = %.2f",a,b,a-b);
	else if(c=='*') printf("%f * %f = %.2f",a,b,a*b);
	else if(c=='/') printf("%f / %f = %.2f",a,b,a/b);
    //BÀI 2
	char s[100];
	int i,j;
	printf("\nnhap xau: ");
	fflush(stdin);
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]!=s[strlen(s)-1-i]){
			printf("xau khong doi xung!\n");
			printf("xau dao la: ");
			for(j=strlen(s)-1;j>=0;j--){
				printf("%c",s[j]);
			}
			return 0;
		}
	}
	printf("xau doi xung!");
    return 0;
}
