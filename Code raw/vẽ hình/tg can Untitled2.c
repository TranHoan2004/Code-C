#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);
  int i,j;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i=0;i<n;i++) {
  	for (j=0;j<n;j++) {
  		if (j<=i) {
  			printf("*");
		  }
	  }
	  if (i<n) printf("\n");
  }
  for (i=1;i<n;i++) {
  	for (j=1;j<=n-1;j++) {
  		if(j <= n - i) {
                printf("*");
            } 
		else {
                printf(" ");
            }        
        
	  }
	  printf("\n");
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


