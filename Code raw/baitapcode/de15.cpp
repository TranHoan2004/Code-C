/*
Đề 15
Câu 1 
Nhập số tự nhiên n (1≤n≤10) và dãy số thực a1, a2, …an.
In lại dãy số.
Hãy tính S = a1 – a2 +a3 – a4+…+(-1)nan.  
Câu 2
Xây dựng kiểu cấu trúc phân số. 
Tính tổng, tích của hai phân số bất kỳ được nhập bất kỳ từ bàn phím
*/

#include<stdio.h>
#include<conio.h>
int ucln(int a,int b){
	int u;
	if(a==0||b==0) u=a+b;
	else{
		while(a!=b){
			if(a>b) a-=b;
			else b-=a;
		}
		u=a;
	}
	return u;
}

struct phanSo{
	int tuso;
	int mauso;
};

int main(){
	//BÀI 1
	int n,i,a[11],sum=0;
	printf("nhap n = ");
	Nhap:
	scanf("%d",&n);
	if(n<1||n>10){
		printf("k phu hop du kien de bai!\nNhap lai: n= ");
		goto Nhap;
	}
	printf("nhap day so thuc:\n");
	for(i=0;i<n;i++){
		printf("a[%d] = ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		if(i%2==0) sum+=a[i];
		else sum-=a[i];
	}
	if((n-1)%2==0) sum-=a[n-1];
	else sum+=a[n-1];
	printf("in day so da nhap: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nS = %d\n",sum);
	/*
	NẾU KHÔNG ĐÚNG NHƯ NHỮNG GÌ MONG ĐỢI HÃY XEM LẠI ĐỀ BÀI TRƯỚC.
	VÌ TỔNG NÀY NẾU THEO QUY LUẬT THƯỜNG GẶP SỐ HẠNG TỔNG QUÁT PHẢI LÀ (-1)^(n-1)*An
	*/
	fflush(stdin);
	//BÀI 2
	struct phanSo ps[2];
	for(i=0;i<2;i++){
		printf("phan so %d:\n",i+1);
		printf("tu so: ");scanf("%d",&ps[i].tuso);
		printf("mau so: ");scanf("%d",&ps[i].mauso);
	}
	if(ps[0].mauso==ps[1].mauso){
		printf("%d/%d +%d/%d = %d/%d\n",ps[0].tuso,ps[0].mauso,ps[1].tuso,ps[1].mauso,ps[0].tuso+ps[1].tuso,ps[0].mauso);
		printf("sau khi rut gon phan so ta co: %d/%d = %d/%d\n",ps[0].tuso+ps[1].tuso,ps[0].mauso,(ps[0].tuso+ps[1].tuso)/ucln(ps[0].tuso+ps[1].tuso,ps[0].mauso),ps[0].mauso/ucln(ps[0].tuso+ps[1].tuso,ps[0].mauso));
	}
	else{
		printf("%d/%d +%d/%d = %d/%d\n",ps[0].tuso,ps[0].mauso,ps[1].tuso,ps[1].mauso,ps[0].tuso*ps[1].mauso+ps[1].tuso*ps[0].mauso,ps[0].mauso*ps[1].mauso);
		printf("sau khi rut gon phan so ta co: %d/%d = %d/%d\n",(ps[0].tuso)*(ps[1].mauso)+(ps[1].tuso)*(ps[0].mauso),(ps[0].mauso)*(ps[1].mauso),((ps[0].tuso)*(ps[1].mauso)+(ps[1].tuso)*(ps[0].mauso))/ucln(ps[0].tuso*ps[1].mauso+ps[1].tuso*ps[0].mauso,ps[0].mauso*ps[1].mauso),(ps[0].mauso)*(ps[1].mauso)/ucln(ps[0].tuso*ps[1].mauso+ps[1].tuso*ps[0].mauso,ps[0].mauso*ps[1].mauso));
	}
	printf("%d/%d * %d/%d = %d/%d\n",ps[0].tuso,ps[0].mauso,ps[1].tuso,ps[1].mauso,ps[0].tuso*ps[1].tuso,ps[0].mauso*ps[1].mauso);
	printf("sau khi rut gon phan so ta co: %d/%d = %d/%d",ps[0].tuso*ps[1].tuso,ps[0].mauso*ps[1].mauso,(ps[0].tuso*ps[1].tuso)/ucln(ps[0].tuso*ps[1].tuso,ps[0].mauso*ps[1].mauso),(ps[0].mauso*ps[1].mauso)/ucln(ps[0].tuso*ps[1].tuso,ps[0].mauso*ps[1].mauso));
	return 0;
}
//PHẢI TẬP GÁN GIÁ TRỊ(QUÁ LOẰNG NGOẰNG VÀ KHÓ HIỂU)