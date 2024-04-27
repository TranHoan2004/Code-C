#include<stdio.h>
#include<math.h>

int main(){
	float s,t;
	printf("moi nhap thu nhap: ");
	scanf("%f",&s);
	if(s<=1000) t=0;
	else if(s>1000&&s<=2000) t=(s-1000)*0.05;
	else if(2000<s&&s<=4000) t=(s-2000)*0.1;
	else t=(s-4000)*0.2+250;
	printf("neu thu nhap la %.2f thi so thue TNCN phai nop la %.2f",s,t);
}