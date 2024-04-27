#include<stdio.h>

main()
{
	int n;
	printf("Input so giay n=");
	scanf("%d", &n); //khai bao n
	printf("%d Nam", n/31104000);
	n=n%31104000;
	printf("%d Thang", n/2592000);
	n=n%2592000;
	printf("%d Ngay", n/86400);
	n=n%86400;
	printf("%d Gio", n/3600);
	n=n%3600;
	printf("%d Phut", n/60);
	n=n%60;
	printf("%d Giay", n%60);
	return 0;
}
