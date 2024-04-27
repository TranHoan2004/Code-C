#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//void arrayOfdigits(int n, int a[], int *m) {
//  int i,k; i=0;
//  while(n>0) {
//   k = n%10;
//   a[i++]=k;
//   n=n/10; 	
//  }
//  *m=i;
//}

int main() {
  system("cls");
  int n,m,i,s,k; scanf("%d",&n);
  int a[20];
  while(n>0) {
   k = n%10;
   a[i++]=k;
   n=n/10; 	
  }
 	 m=i;
  s = 0;						   //neu muon nhan thi sua s = 1			
  for(i=0;i<m;i++) s += a[i];     //neu nhan thi thay dau + thanh *  
  printf("\nOUTPUT:\n");
  printf("%d",s);
  printf("\n");
  system ("pause");
  return(0);
}
