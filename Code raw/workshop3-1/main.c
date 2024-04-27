#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int agv(int a)
{
	int y, result;
	for (y = 2; y <= a/2; y++) {
        if (a % y == 0) 
            return 0;
    }
    return 1;
} 
int main(int argc, char *argv[])
{
	printf("Press to continue!");
	while (getchar() != '\n');
	{
		int a, y;
		int kq;
		printf("Press a integer number: ");
		scanf("%d", &a);
		if (a<2)
		{
			printf("Error!");
			return 0;
		}
		for (y=2;y<a;y++)
		{
			
			if (kq=agv(y))
		       printf("Primes of inputted integer: %d\n", y);
		}
		
	}
	return 0;
}
