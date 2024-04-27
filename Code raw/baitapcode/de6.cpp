/*
Đề 6.
Câu 1 
Nhập các hệ số, giải và biện luận hệ phương trình:
 |a*x+b*y=c
 |d*x+e*y=f 
Câu 2 
Nhập một chuỗi bất kì từ bàn phím, kiểm tra xem chuỗi có đối xứng hay không.
 Nếu là chuỗi đối xứng thì đếm và in ra tổng các kí tự giống nhau ra màn hình.
 Nếu không hãy in ra xâu đảo của xâu này.
*/
#include<stdio.h>
#include<string.h>
int main(){
	//BÀI 1
	float a,b,c,d,e,f,detA,detAx,detAy;
	printf("moi nhap he so a, b, c, d, e, f...\n");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	printf("\nhe phuong trinh can giai:\n");
	printf("%.2f*x+%.2f*y=%.2f\n%.2f*x+%.2f*y=%.2f\n",a,b,c,d,e,f);
	//SỬ DỤNG ĐỊNH THỨC CRAMER
	detA=a*e-b*d;
	detAx=c*e-f*b;
	detAy=a*f-d*c;
	if(detA==detAx&&detAx==detAy&&detAy==0) printf("he phuong trinh vo so nghiem.\n");
	else if(detA==0&&(detAx!=0||detAy!=0)) printf("he phuong trinh vo nghiem.\n");
	else{
		printf("he phuong trinh co nghiem duy nhat la: (x,y) = (%.2f,%.2f)\n",detAx/detA,detAy/detA);
	}
	//BÀI 2
	char s[100];
	int i;
	printf("nhap chuoi: ");
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		if(s[i]!=s[strlen(s)-1-i]){
			printf("chuoi khong doi xung.\n");
			printf("xau dao cua no la: ");
			for(i=strlen(s)-1;i>=0;i--){
				printf("%c",s[i]);
			}
			return 0;
		}
	}
	printf("chuoi doi xung.\n");
	printf("tong cac ki tu giong nhau la: ");
	if(strlen(s)%2==0) printf("%d ki tu.",strlen(s));
	else printf("%d ki tu.",strlen(s)-1);
	return 0;
}
//Chưa giải quyết triệt để trường hợp ở line 25.Ví dụ khi nhập 0 0 1 0 0 0.