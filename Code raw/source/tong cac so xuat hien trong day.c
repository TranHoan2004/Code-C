//Tinh tong cac so xuat hien trong s
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  int n;
  	
	scanf("%d",&n);
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  // Fixed Do not edit anything here.
  	int s=0;
	while(n!=0){
	s+=n%10;
	n/=10;
	}
   
  
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%d\n",s);
  //printf("The sum of all digits in %d is ",n);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
