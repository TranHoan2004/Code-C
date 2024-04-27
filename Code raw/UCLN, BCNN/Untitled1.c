//Develop a program that will accept two positive integers then print out the greatest common divisor (UCLN) and the least common multiple (BCNN) of them.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("Press enter to continue!");
	while( getchar() != '\n'); {
		int a, b, GCD, LCM, temp;
		printf("Press the first number: ");
		scanf("%d", &a);
		printf("Press the second number: ");
		scanf("%d", &b);
		if (a==0||b==0) {
			printf("Boi chung nho nhat: khong co, uoc chung nho nhat: khong co");
		}
		else {
		    while(b!=0){	
		         temp=b;;
		         b=a%b;
		         a=temp;
	        }
	
	        GCD=a;
	        LCM=(a*b)/GCD;
			printf("Boi chung nho nhat: %d, uoc chung lon nhat: %d", LCM, GCD );
		}
	}
	return 0;
}
