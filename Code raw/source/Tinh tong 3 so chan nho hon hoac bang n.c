#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  //Tong 3 so chen cuoi tu n
  int n, sum = 0, count = 0;
  scanf("%d", &n);
  while(count < 3)
  {
  	if(n %2 == 0)
	  {
	  	++count;
	  	sum += n;
	  }
  	n--;
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d", sum);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
