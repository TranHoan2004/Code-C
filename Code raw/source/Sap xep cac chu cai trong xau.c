#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main(){
	char string[100];
	char temp;
	int i,j;
	for(i=0;i<4;i++){
	scanf("%s",&string[i]);
}
	for (i = 0; i < 3; i++) {
      for (j = i+1; j < 4; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
    for(i=0;i<4;i++){
    	printf(" %c ",string[i]);
	}
	return 0;
}

