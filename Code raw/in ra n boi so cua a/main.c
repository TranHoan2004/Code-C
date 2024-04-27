#include <stdio.h>
#include <stdlib.h>
#include "songuyento.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//in ra n so nguyen to
int main(int argc, char *argv[]) {
	printf("Press enter to continue!");
	while ( getchar() != '\n'); {
		int a, i, result;
		printf("Press a number: ");
		scanf("%d", &a);
		if (a<2) return 0;
		else {
			for (i=2; i<a; i++){
				if (result = songuyento(i)) printf("Primes: %d\n", i);
				
			}
			
		}
	}
	return 0;
}
