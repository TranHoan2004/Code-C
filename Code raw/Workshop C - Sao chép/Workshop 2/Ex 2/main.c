#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double pa, pd, tf, ti, income, result;
         int n;
         printf("Nhap thu nhap 1 nam cua ban: ");
         scanf("%lf", &income);
         printf("Nhap tien nuoi ban than hang thang: ");
         scanf("%lf", &pa);
         printf("Nhap tien cap duong hang thang: ");
         scanf("%lf", &pd);
         printf("Nhap so nguoi phu thuoc: ");
         scanf("%d", &n);
         tf = 12*(pa + n*pd);
         ti = income - tf;
         if ( ti > 0 && ti <= 5000000)
         {
             result = ti * 5 / 100;
             printf("Thue thu nhap ca nhan cua ban trong 1 nam la: %lf", result);
             
         }
         if ( ti >= 5000001 && ti <= 10000000 )
         {
             result = 5000000 * 5 / 100 + (ti - 5000000) * 10 / 100;
             printf("Thue thu nhap ca nhan cua ban trong 1 nam la: %lf", result);
             
         }
         if ( ti >= 10000001 && ti <= 18000000 )
         {
             result = 5000000 * 5/100 + 10000000 * 10/100 + (ti - 15000000)*15/100;
             printf("Thue thu nhap ca nhan cua ban trong 1 nam la: %lf", result);
             
         }
         else if ( ti > 18000000 )
         {
             result = 5000000 * 5 / 100 + 1000000*10/100 + 18000000*15/100 ;
             printf("Thue thu nhap ca nhan cua ban trong 1 nam la: %lf", result);             
         }
	return 0;
}
