//tinh do dai chuoi ko dung while

#include<stdio.h>
#include<string.h>
 
int main() {
   char str[100];
   int len;
  
   printf("\nNhap mot chuoi bat ky: ");
   gets(str);
  
   len = strlen(str);
  
   printf("\nDo dai cua chuoi la: %d", len);
   return(0);
}


// tinh do dai chuoi su dung while
#include <stdio.h>
 
int main() {
   // khoi tao chuoi s1
   char s1[] = "VietTuts.Vn";
   int i = 0;
     
   // su dung vong lap while tinh do dai cua chuoi
   // '\0' la ky tu NULL ket thuc cua mot chuoi
   while(s1[i] != '\0') {
      i++;
   }
    
   printf("Do dai cua chuoi '%s' la: %d", s1, i);
    
   return 0;
}
