#include <stdio.h>

main()
{
  int n,i; 
  long Tong=0;
  long int t=1;
  printf("Nhap n : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%ld  ",t);
      if (i<n)
      {
          printf("+ "); 
          
      }
     Tong=Tong+t;
     t=(t*10)+1;
  }
  printf("\nTong : %ld\n",Tong);
}
