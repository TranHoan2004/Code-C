/*
Đề 12
Câu 1. 
Vừa gà vừa chó bó lại cho tròn 36 con 100 chân chẵn. Hãy tìm số gà và số chó.
Câu 2. 
Nhập một xâu bất kỳ từ bàn phím, in ra mỗi kí tự trên 1 dòng, kiểm tra xem xâu có đối xứng không?
Nếu không đói xứng thì in ra màn hình xâu đảo của xâu đã cho.
*/

#include<stdio.h>
#include<string.h>
int main(){
	/*BÀI 1
	Phân tích gà có 2 chân chó có 4 chân
	Gọi số gà là x số chó là y
	Ta có hpt
	x+y=36
	2x+4y=100
	*/
	//Dùng code đề 6 về biện luận nghiệm bằng định lí cramer
	float a,b,c,d,e,f,detA,detAx,detAy;
	printf("theo de bai ta co: a=1, b=1, c=36, d=2, e=4, f=100");
	a=1,b=1,c=36;
	d=2,e=4,f=100;
	printf("\nhe phuong trinh can giai:\n");
	printf("%.2f*x+%.2f*y=%.2f\n%.2f*x+%.2f*y=%.2f\n",a,b,c,d,e,f);
	detA=a*e-b*d;
	detAx=c*e-f*b;
	detAy=a*f-c*d;
	printf("so ga la: %.0f con\n",detAx/detA);
	printf("so cho la: %.0f con\n",detAy/detA);
	//BÀI 2
	char s[100];
	int i,j;
	printf("\nnhap xau: ");
	fflush(stdin);
	gets(s);
	printf("in moi ki tu tren mot dong: \n");
	for(i=0;i<strlen(s);i++){
		printf("%c\n",s[i]);
	}
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