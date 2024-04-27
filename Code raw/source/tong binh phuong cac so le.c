#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  int a[10],n,i,s;
  printf ("So phan tu trong day:");
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  s = 0;
  for(i=0;i<n;i++)
    if(a[i]%2==1) s += a[i]*a[i];
  printf("\nOUTPUT:\n");
  printf("%d",s);
  printf("\n");
  system ("pause");
  return(0);
}
