/*
Câu 1
Giải và biện luận phương trình bậc hai ax2+bx+c=0 (không kể trường hợp suy biến).
Câu 2
Xây dựng kiểu dữ liệu cấu trúc hình tròn có các thành phần dữ liệu chính là tọa độ tâm (x,y) của hình tròn và bán kính (R).
 Viết chương trình nhập dữ liệu cho một mảng cấu trúc hình tròn, tính diện tích của các hình tròn.
  In ra thông tin của các hình tròn này
*/

#include<stdio.h>
#include<math.h>

struct hinhTron
{
    float x;
    float y;
    float r;
    float s;
};

int main()
{
    //BÀI 1
    float a, b, c, delta;
	printf("nhap he so a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta<0) printf("vo nghiem\n");
	else if(delta==0) printf("nghiem kep: x = %.2f\n",-b/(2*a));
	else printf("phuong trinh co 2 nghiem phan biet la: x1 = %.2f, x2 = %.2f\n",(-b+sqrt(delta))/(2*a),-(b+sqrt(delta))/(2*a));
    //BÀI 2
    int i,n;
    struct hinhTron o[100];
    n:
    printf("nhap so hinh tron: ");scanf("%d",&n);
    if(n<=0)
    {
        printf("khong hop le, moi nhap lai!\n");
        goto n;
    }
    for(i=0;i<n;i++)
    {
        printf("nhap thong tin hinh tron thu %d\n",i+1);
        printf("hoanh do tam x = ");scanf("%f",&o[i].x);
        printf("tung do tam y = ");scanf("%f",&o[i].y);
        printf("ban kinh R = ");scanf("%f",&o[i].r);
        o[i].s=3.14*o[i].r*o[i].r;
    }
    printf("\ndanh sach hinh tron da nhap: \n");
    printf("STT\tToa do tam\tBan kinh\tDien tich\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t(%.2f,%.2f)\t%f\t%.2f\n",i+1,o[i].x,o[i].y,o[i].r,o[i].s);
    }
    return 0;
}
