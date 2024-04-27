/*
Đề10
Câu 1 
Nhập từ bàn phím hai cạnh: chiều dài, chiều rộng của một hình chữ nhật
(chiều dài lớn hơn 2 lần chiều rộng).
 Hãy tính chu vi và diện tích của hình chữ nhật đó. 
Câu 2 
Lập hàm kiểm tra số chính phương(Số chính phương là số bằng bình phương của một số nguyên nào đó).
 Nhập dãy số nguyên dương.
 Xét xem trong dãy có số chính phương hay không?
 Nếu có hãy in ra các số chính phương. 
*/

#include<stdio.h>
#include<math.h>

int scp(int n){
	int sqr=sqrt(n);
	if(sqr*sqr==n) return 1;
	else return 0;
}

int main(){
	//BÀI 1
	float cd,cr;
	printf("nhap chieu rong: ");
	scanf("%f",&cr);
	Nhap:
	printf("nhap chieu dai: ");
	scanf("%f",&cd);
	if(cd<=2*cr){
		printf("chieu dai lon hon 2 lan chieu rong, moi nhap lai.\n");
		goto Nhap;
	}
	printf("chu vi cua hinh chu nhat la: %.2f.\n",(cd+cr)*2);
	printf("dien tich cua hinh chu nhat la: %.2f.\n",cd*cr);
	//BÀI 2
	int n,i,a[100],b[100],k=0;
	Nhap1:
	printf("nhap so so nguyen duong: ");
	scanf("%d",&n);
	if(n<=0){
		printf("khong hop le, moi nhap lai.\n");
		goto Nhap1;
	}
	Nhap2:
	printf("nhap day so nguyen duong: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]<0){
			printf("chi nhap nhung so nguyen duong, nhap lai.\n");
			goto Nhap2;
		}
	}
	for(i=0;i<n;i++){
		scp(a[i]);
		if(scp(a[i])){
			b[k]=a[i];
			k++;
		}
	}
	if(k==0) printf("day khong co so chinh phuong.");
	else{
		printf("day so co %d so chinh phuong la: ",k);
		int count=k;
		for(k=0;k<count;k++){
			printf("%d ",b[k]);
		}
	}
	return 0;
}