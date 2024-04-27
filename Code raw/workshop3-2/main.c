#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	printf("Press enter to continue!");
	while (getchar() != '\n');
	{
		int a, b, c;
		printf("Enter the day: ");
		scanf("%d", &a);
		printf("Enter the month: ");
		scanf("%d", &b);
		printf("Enter the year: ");
		scanf("%d", &c);
		printf("Your birthday: %d/%d/%d\n", a, b, c);
		if (b==1||b==3||b==5||b==7||b==8||b==10||b==12) 
		{
			if (a<1 || a>31) printf("Day is not valid! ");
			return 0;
		}
		if (b==4||b==6||b==9||b==11)
		{
			if (a<1 || a>30) printf("Day is not valid! "); return 0;
		}
		if (a<1 || a>31) 
		{
			printf("Day is not valid!");
			return 0;
		}
		if (b<1 || b>12)
		{ 
		   printf("Month is not valid!");
		   return 0;
		} 
		if (a>28 && c%400!=0 && c%100!=0 || c%4!=0)
		{
			printf("Day is not valid");
			return 0;
		}
		
		if (a==29 && b==2 && c%400==0 && c%100==0 || c%400==0 && c%100 == 0 || c%4==0)
		{
			printf("Your birthday is in the leap year!");
		}
		else printf("Your birthday is not a leap year!");
	}
	return 0;
}
