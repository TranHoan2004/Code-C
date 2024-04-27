#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int sum=0;
	do {
		printf("Press a: ");
		scanf("%d", &a);
		if (a!=0) {
			sum+=a; 
		} 
	} 
	while (a!=0);
	printf("%d", sum); 
	return 0;
}
