/*
Đề 1.
Câu 1 
Giải và biện luận phương trình bậc hai ax2+bx+c = 0 với a ≠ 0, b, c được nhập bất kỳ từ bàn phím.
Câu 2 
Lập hàm kiểm tra số nguyên tố bất kỳ.
 Áp dụng viết chương trình đếm và in ra các số nguyên tố có trong một mảng nguyên kích thước n được nhập từ bàn phím.  
*/
#include<stdio.h>
#include<math.h>
int ktsnt(int n){
	int i;
	if(n<2) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	//BÀI 1
	float a, b, c, delta;
	printf("nhap he so a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta<0) printf("vo nghiem\n");
	else if(delta==0) printf("nghiem kep: x = %.2f\n",-b/(2*a));
	else printf("phuong trinh co 2 nghiem phan biet la: x1 = %.2f, x2 = %.2f\n",(-b+sqrt(delta))/(2*a),-(b+sqrt(delta))/(2*a));
	//BÀI 2
	int i,n,s[100];
	printf("nhap so phan tu mang: ");
	scanf("%d",&n);
	printf("nhap du lieu cho mang: \n");
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++){
		if(ktsnt(s[i])) printf("%d ",s[i]);
	}
	return 0;
}