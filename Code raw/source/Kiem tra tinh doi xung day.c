#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  //Kiem tra tinh doi xung day (symmetric)
  int n, check = 1;
  scanf("%d", &n);
  int* array = (int*)malloc(sizeof(int)* n);
  int i;
  for( i = 0; i < n; i++)
  {
  	scanf("%d", &array[i]);
  }
  for( i = 0; i < n/2; i++)
  {
	  if(array[i] != array[n-i-1])
	  {
		check = 0;
	  	break;
	  }
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(check == 1) printf("1");
  else printf("0");
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
