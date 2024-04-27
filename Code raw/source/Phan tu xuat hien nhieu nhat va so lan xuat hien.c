#include<stdio.h>
#include<conio.h>
int a[100];
void main()
{
 int i, n,j, max, gt, dem;
 printf("nhap so phan tu cua mang:");
 scanf_s("%d", &n);
 for (i = 0; i < n; i++)
 {
  printf("a[%d]=", i + 1);
  scanf_s("%d", &a[i]);
 }
 printf("mang da nhap:\n");
 for (i = 0; i < n; i++) printf(" %d ", a[i]);
 max = 1;
 for (i = 0; i < n; i++)
 {
  dem = 0;
  for (j = 0; j < n; j++)
  {
   if (a[i] == a[j]) dem++;
  }
  if (max < dem)
  {
   max = dem;
   gt = a[i];
  }
 }
 printf("\nphan tu xuat hien nhieu nhat la: %d\n voi so lan xuat hien la: %d", gt, max);
 _getch();
}
