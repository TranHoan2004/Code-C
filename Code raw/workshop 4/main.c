#include <stdio.h>
#include <stdlib.h>

int primes(int a) {
	
		for (int i=2; i<=a/2; i++) {
		     if (a%i==0) return 0;
	    }
	return 1;	
}

void xuatprime(int a, int i, int result) {
	printf("Press the inputted number: ");
	scanf("%d", &a);		
		if (a<2) return 0;
		else {
			for (i=2; i<a; i++){
				if (result = primes(i)) printf("Primes: %d\n", i);				
			}			
		}
}

void minmax() {
	
}

int main() {
	int choice;
	printf("Press enter to continue!");
	while ( getchar() != '\n'); {
	   do {
	    int a, i, result;
		printf("Please choose one of the following options");
		printf("\n1- Process primes.");
		printf("\n2- Print min, max digit in an integer.");
		printf("\n3- Quit.");
		printf("\nYour choice: ");
		scanf("%d", &choice);
		getchar();
		switch (choice) {
			case 1: xuatprime(a, i, result);
			        break;
			case 2: printf("a\n");
			        break;
			case 3: printf("Goodbye, see you later!");
			        break;
			default: printf("Invalid, please try again!");
			         break;
		}			
	   }
	   while (choice!=3);
	
	}
	return choice;
} 
