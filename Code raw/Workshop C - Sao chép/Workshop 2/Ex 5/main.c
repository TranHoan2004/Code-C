#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, vowel=0, cons=0, Other=0;
	char c[200];
	char ch;
	printf("Press: ");
	fgets(c, sizeof(c), stdin);
	do {
		
		for (i=0; c[i] != '\0'; i++) {
			ch = toupper(c[i]);
			if (ch >= 'A' && ch <= 'Z') {
				switch (ch) {
					case 'A': 
					case 'E':
					case 'I':
					case 'O':
					case 'U': vowel++;
					          break;
					default: cons++;
					         break;
				}
			}
			else if (ch != '\n') {
				Other++;
			}
		}
	} 
	while (ch != '\n');
	printf("Vowel: %d\n", vowel);
	printf("Consonant: %d\n", cons);
	printf("Other: %d\n", Other);	
	return 0;
}
