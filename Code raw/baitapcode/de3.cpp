/*
Đề 3.
Câu 1
Tìm các số có 3 chữ số sao cho tổng lập phương của các chữ số bằng chính nó. (Ví dụ 13+53+33=153)
Câu 2 
Nhập dãy số nguyên dương. Xét xem trong dãy có số hoàn hảo hay không (là số có tổng các ước của nó bằng chính nó:VD 6=1+2+3)?
 Nếu có hãy in ra các số hoàn hảo. Từ đó tìm số hoàn hảo nhỏ nhất trong dãy
*/
#include<stdio.h>

int main(){
	//BÀI 1
	int n,a,b,c,s[100],i,sum=0,j,k=0,r[100],count=0;
	printf("nhung so thoa man de bai la:");
	for(n=100;n<1000;n++){
		a=n/100;
		b=(n-a*100)/10;
		c=n-a*100-b*10;
		if(a*a*a+b*b*b+c*c*c==n) printf("%d ",n);
	}
	//BÀI 2
	printf("\nnhap so so nguyen duong: ");
	scanf("%d",&n);
	printf("\nnhap so nguyen duong: \n");
	for(i=0;i<n;i++){
		printf("s[%d] = ",i);
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<s[i];j++){
			if(s[i]%j==0){
				sum+=j;
			}
		}
		if(sum==s[i]){
			r[k]=s[i];
			k++;
			count++;
			sum=0;
		}
		else sum=0;
	}
	if(count==0) printf("trong day khong co so nao thoa man.");
	else{
		printf("co %d so hoan hao trong day la: ",count);
		for(k=0;k<count;k++){
			printf("%d ",r[k]);
		}
	}
	printf("\nso hoan hao nho nhat la: ");
	int min=r[0];
	for(k=0;k<count;k++){
		if(r[k]<min){
			min=r[k];
		}
	}
	printf("%d",min);
	return 0;
}