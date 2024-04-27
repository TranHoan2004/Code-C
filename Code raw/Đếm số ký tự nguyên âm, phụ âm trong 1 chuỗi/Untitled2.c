//Write a program that permits user entering some characters until the ENTER key (code 10) is pressed. The program will print out the number of digits, number of letters, number of other keys were pressed
#include <stdio.h>

int main() {
    char n;
    int countdigits=0, countch=0, countother=0;
    printf("Press: ");
	do {		
		n = getchar();
		if (n>='0' && n<='9') countdigits++;
		else if ((n>='A' && n<='Z') || (n>='a' && n<='z')) countch++;
		else countother++;
		
		
	}   
	while (getchar() != '\n');
	printf("Digits: %d\n", countdigits);
	printf("Characters: %d\n", countch);
	printf("Other: %d", countother++);
    return 0;
}

