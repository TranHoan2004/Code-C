#include <stdio.h>
int date() {
		int a, b, c;
		printf("Enter the day: ");
		scanf("%d", &a);
		printf("Enter the month: ");
		scanf("%d", &b);
		printf("Enter the year: ");
		scanf("%d", &c);
		if (b==1||b==3||b==5||b==7||b==8||b==10||b==12) 
		{
			if (a<1 || a>31) printf("Day is not valid! ");
			return 0;
		}
		else if (b==4||b==6||b==9||b==11)
		{
			if (a<1 || a>30) printf("Day is not valid! "); 
			return 0;
		}
		else if (a<1 || a>31) 
		{
			printf("Day is not valid!");
			return 0;
		}
		else if (b<1 || b>12)
		{ 
		   printf("Month is not valid!");
		   return 0;
		} 
		else if (a>28 && c%400!=0 && c%100!=0 || c%4!=0)
		{
			printf("Day is not valid");
			return 0;
		}
		else {
			printf("This is a valid date!");
		}
		return 0;
}
void character() {
	char c1, c2;
	int i;
	printf("c1: ");
	scanf(" %c", &c1);
	printf("c2: ");
	scanf(" %c", &c2);
	if (c1>c2) {
		for (i=(int)c1; i<(int)c2-1; i++) {
		    printf("%c: %d", i+1, (char)i);
	    }
	}
	else if (c1<c2) {
		for (i=(int)c2; i<(int)c1-1; i++) {
		    printf("%c: %d", i+1, (char)i);
	    }
	}
	else (c1=c2); {
		printf("There is no values");
	}
}
int main() {
	int choice;
    printf("\n------------------------------------\n");
    printf("Press enter to continue!");
    printf("\n------------------------------------\n\n");
    while (getchar() != '\n'); {
    	
    	do {
    		printf("Choose one of them: \n");
    		printf("1- Prcessing date data.\n");
    		printf("2- Character data.\n");
    		printf("3- Quit.\n");
    		printf("Your choice: ");
    		scanf("%d", &choice);
    		switch (choice) {
    			case 1: date();
    			        break;
    			case 2: character();
    			        break;
    			case 3: printf("Goodbye!");
    			        break;
    			default: printf("Error!");
    			         break;
			}
		}
		while (choice != 3);
	}
	return choice;
}
