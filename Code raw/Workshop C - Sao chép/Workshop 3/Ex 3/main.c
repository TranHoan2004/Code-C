#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int avg(double a, double b, double r) 
{
	double d=a*a+b*b; 
	double R=r*r;
	if(d<R) printf("The point is not on the circle!");
	else if (d==R) printf("The point is on the circle!");
	return 0; 
}
int main(int argc, char *argv[]) {
	printf("Press enter to continue!");
	while( getchar() != '\n');
	{
		int x, y;
		int r, kq;
		printf("Tinh kich thuoc hinh tron\n");
		printf("Nhap toa do cua diem P: ");
		printf("(x,y): ");
		scanf("%d %d", &x, &y);
		printf("Nhap do dai ban kinh hinh tron: ");
		scanf("%d", &r);
		kq=avg(x,y,r);
	}
	return 0;
}
