#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double makeDouble(int ipart, int frac) {
    int length = (int)log10((double)frac) + 1;
    double divisor = pow(10.0, length);
    double result = ipart + frac / divisor;
    if (ipart<0) {
        return ipart - frac / divisor;
    }
    else return result;
}
int main(int argc, char *argv[]) {
	printf("Ghep 2 so nguyen thanh 1 so thuc\n");
	printf("Nhap phan nguyen: ");
    int ipart;
    scanf("%d", &ipart);
    int frac;
    do {
        printf("Nhap phan thap phan: ");
        
        scanf("%d", &frac);
    } while (frac<0);
    
    printf("%2f", makeDouble(ipart, frac));
	return 0;
}
