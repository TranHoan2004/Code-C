/*
Đề 2.
Câu 1
Giải và biện luận phương trình bậc hai ax2+bx+c=0 (xét cả trường hợp suy biến).
Câu 2 
Nhập một dãy số thực a, kích thước n.
 Nhập một số thực x bất kỳ từ bàn phím. Kiểm tra xem số thực x  có trong dãy hay không, nếu có thì xuất hiện bao nhiêu lần và in ra các vị trí của nó có trong dãy.
*/
#include<stdio.h>
#include<math.h>

int main(){
	//BÀI 1
	float a,b,c,delta;
	printf("moi nhap he so a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0) printf("phuong trinh vo so nghiem.\n");
			else printf("phuong trinh vo nghiem.\n");
		}
		else printf("phuong trinh co nghiem duy nhat la: x = %.2f",-c/b);
	}
	else {
		delta=b*b-4*a*c;
		if(delta<0) printf("vo nghiem\n");
		else if(delta==0) printf("nghiem kep: x = %.2f\n",-b/(2*a));
		else printf("phuong trinh co 2 nghiem phan biet la: x1 = %.2f, x2 = %.2f\n",(-b+sqrt(delta))/(2*a),-(b+sqrt(delta))/(2*a));
	}
	//BÀI 2
	int h[100],k[100],i,j=0,n,count=0,find;
	printf("nhap so phan tu mang: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("nhap tung phan tu mang: h[%d] = ",i);
        scanf("%d",&h[i]);
    }
    printf("\nnhap gia tri can tim: ");
	scanf("%d",&find);
	for(i=0;i<n;i++){
		if(find==h[i]){
			count++;
			k[j]=i;
			j++;
		}
	}
	if(count==0) printf("phan tu khong xuat hien trong mang.");
	else{
		printf("phan tu co xuat hien trong mang va xuat hien %d lan",count);
		printf("\nphan tu can tim xuat hien o vi tri: ");
		for(j=0;j<count;j++){
			printf("%d ",k[j]);
		}
	}
	return 0;
}