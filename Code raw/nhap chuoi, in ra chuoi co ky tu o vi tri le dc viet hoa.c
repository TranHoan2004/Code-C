#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char a[100];
    int i;
    fgets(a, sizeof(a), stdin);
    
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i=0;i<strlen(a);i++) {
      if (a[i]>='a'&&a[i]<='z' && i%2!=0) {
          a[i]= toupper(a[i]);
      }
  }
  printf("%s", a); 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
