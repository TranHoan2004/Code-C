#include <stdio.h>

int main()
{
	int a[1000], n, b, i = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ",i );
		scanf("%d", &a[i]);
	}
	int dem = 0;
	while(a[i + 1] > a[i])
	{
		i++;
		dem++;
	}
	if(dem == n - 1) printf("La day so tang dan");
	else printf("Khong phai day so tang dan, %d", a[i+1]);
	return 0;
}
