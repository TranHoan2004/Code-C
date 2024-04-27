#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	printf("Press enter to continue!"); 
	while (getchar() != '\n');
	{
		int a;
		printf("Press the integer: ");
		scanf("%d", &a);
		if(a<0) printf("Error!");
		else if (a=0) printf("0");
		else {
             int result = 1;
             for (int i = 1; i <= n; i++) 
			 {
                  result = result * i;
             }
        }
        return result;
		printf("%d", result);
		} 
		
		
		 
	}
	return 0;
}
