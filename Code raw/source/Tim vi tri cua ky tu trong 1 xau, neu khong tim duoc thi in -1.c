#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  //Tim vi tri cua xau p trong xau s
  char s[100], p[100];
  char* i;
  int n;
  scanf("%99[^\n]", s);
  getchar();
  scanf("%99[^\n]", p);
  i = strstr(s, p);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if (i == NULL) printf("-1");
  else 
  {
  	n = strlen(s) - strlen(i);
  	printf("%d", n);
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
