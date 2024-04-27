#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
	int a[5];
	int i,j;
	for ( i =0 ; i<5; i++){
		scanf("%d", &a[i]);
	}
  	int tg;
  	for( i = 0; i < 5;i++){	
        for( j =i+ 1; j <=5;j++){
            if(a[i]>a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;	
        	}
  		 	}
    		}
  printf("\nOUTPUT:\n");
		for( i = 0; i<5;i++){
			if (a[i]%2==1){
				printf ("%d\n",a[i]);
			}
		}
  		 
 		 	
  printf("\n");
  system ("pause");
  return(0);
}
