#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int agv(int a)
{
	int y, result;
	for (y = 2; y <= a/2; y++) {
        if (a % y == 0) 
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
	int a, y;
		int kq;
		printf("Kiem tra so nguyen to\n");
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
	return 0;
}
