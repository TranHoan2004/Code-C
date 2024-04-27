#include <stdio.h>
#include <math.h>
void equation()
{
	float a, b, c, x, S1, S2, delta, p;
	printf("Enter a="); scanf("%f",&a);
	printf("Enter b="); scanf("%f",&b);
	printf("Enter c="); scanf("%f",&c);
	printf("Enter x="); scanf("%f",&x);
	S1=a*x*x+b*x+c;
	printf("S1=%f\n",S1);
	delta=b*b-4*a*c;
	if (delta>0)
		{
		S2=sqrt(delta);
		printf("S2=%f\n",S2);
		}
	else
		printf("S2=0\n");
	printf("Enter a,b,c="); scanf("%f %f %f",&a,&b,&c);
	if (a+b<=c||a+c<=b||b+c<=a)
		printf("a,b,c are not sides of a triangle\n");
	else 
		{
		p=(a+b+c)/2;
		printf("Perimeter=%f\n",a+b+c);
		printf("Area=%f\n",sqrt(p*(p-a)*(p-b)*(p-c)));
		}	
}
void problem() {
	
}
int main() 
{
	int choice;
	do {
		printf("choose: \n");
		printf("1- Quadratic equation\n");
		printf("2- Bank deposit problem\n");
		printf("3- Quit\n");
		printf("Your choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1: equation();
			        break;
			case 2: printf("No data");
			        break;
			case 3: printf("Goodbye!");
			        break;
			default: printf("Invalid");
			         break;
		}
	}
	while (choice != 3);
	return 0;
}

