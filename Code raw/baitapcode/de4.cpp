/*
Đề 4.
Câu 1
Nhập vào một kí tự. Kiểm tra xem kí tự đó là chữ cái, chữ số hay các kí tự khác.
Câu 2
Nhập dãy số thực a (sử dụng con trỏ). Sắp xếp dãy theo chiều giảm dần. 
In ra dãy sau khi sắp xếp.
*/
#include<stdio.h>
#include<math.h>
int main(){
	//BÀI 1
	char s;
	printf("moi nhap mot ki tu: ");
	scanf("%c",&s);
	if(s>='a'&&s<='z'||s>='A'&&s<='Z') printf("ban da nhap chu cai.");
	else if(s>='0'&&s<='9') printf("ban da nhap chu so.");
	else printf("ban da nhap ki tu khac.");
	//BÀI 2
	int i,n,j,a[100],tam;
	printf("\nnhap so so thuc: ");
	scanf("%d",&n);
	printf("nhap cac so thuc: \n");
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",(a+i));
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(*(a+i)>*(a+j)){
				tam=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=tam;
			}
		}
	}
	printf("sap xep giam dan: \n");
	for(i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
	return 0;
}