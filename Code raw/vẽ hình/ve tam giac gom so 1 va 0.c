/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   for (int i=0;i<6;i++) {
       for (int j=0;j<=i;j++) {
           if (i%2!=0 && j%2!=0) {
               printf("1 ");
           }
           else if (i%2==0 && j%2==0) {
               printf("1 ");
           }
           else printf("0 ");
       }
       printf("\n");
   }

    return 0;
}
