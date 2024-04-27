/*
Đề 9
Câu 1 
Nhập vào số nguyên n. Đếm xem số đó có bao nhiêu chữ số và tính tổng của chúng.
Câu 2 
Nhập dãy số thực a (sử dụng con trỏ).
 Tìm các phần tử đạt giá trị lớn nhất và vị trí của chúng trong mảng.
 Đếm các phần tử dương, phần tử âm, bằng 0. 

*/
#include<stdio.h>

int main(){
	//BÀI 1
	int i,n,count=0,sum=0;
	printf("nhap so nguyen n = ");
	scanf("%d",&n);
	if(n==0) printf("n co 1 chu so va tong cac chu so bang 0.\n");
	else{
		for(i=1;i<=n;i*=10){
			count++;
		}
		while(n!=0){
			sum+=n%10;
			n/=10;
		}
	printf("n co %d chu so va tong cua cac chu so do bang %d.\n",count,sum);
	}
	fflush(stdin);
	//BÀI 2
	float a[100];
	N:
	printf("nhap so so thuc: ");
	scanf("%d",&n);
	if(n<=0){
		printf("khong hop le, moi nhap lai.\n");
		goto N;
	}
	printf("nhap day so thuc: \n");
	for(i=0;i<n;i++){
		scanf("%f",(a+i));
	}
	float max=0;
	int duong=0,am=0,khong=0,viTri;
	for(i=0;i<n;i++){
		if(max<=*(a+i)){
			max=*(a+i);
			viTri=i+1;
		}
		if(*(a+i)==0) khong++;
		else if(*(a+i)>0) duong++;
		else am++;
	}
	printf("so lon nhat trong day la %.2f o vi tri so %d cua day.\n",max,viTri);
	printf("trong day co %d so duong, %d so am, %d so bang 0.",duong,am,khong);
	return 0;
}