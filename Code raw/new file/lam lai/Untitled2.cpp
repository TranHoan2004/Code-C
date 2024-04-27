#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nhap(char names[][31], int n) {
	for (int i=0; i<n; i++) {
		printf("Press %d/%d: ", i+1, n);
		fflush(stdin);
		scanf("%30[^\n]", names[i]);
	}
} 

void xuat(char names[][31], int n) {
	for(int i=0; i<n; i++) {		
		puts(names[i]);
	}
}

void sapxep(char names[][31], int n) {
	int i, j;
	char t[31];
	for (i=0; i<n - 1; i++) {
		for (j=n - 1; j>i; j-- ) {
			if (strcmp(names[j], names[j - 1])<0) {
				strcpy(t, names[j]);
				strcpy(names[j], names[j - 1]);
				strcpy(names[j - 1], t);
			}
		}
	}
}

void remove(char names[][31], int *pn) {
	char str[31];
	fflush(stdin);
	printf("enter what u want to remove: ");
	scanf("%30[^\n]", str);
	int found=0;
	for (int i=0; i<*pn; i++) {
		if (strcmp (names[i], str) == 0) {
			found =1;
			(*pn)--;
			for (int j=1; j<(*pn); j++) {
				strcpy(names[j], names[j+1]);
			}
			printf("Success!\n");
			break;
		}
		
	}
	if (!found) {
			printf("Error 404\n");
	}
}


int main() {
	int choice;
	printf("enter");
	while (getchar() != '\n'); {
		int n;
		
		printf("n? ");
		scanf("%d", &n);
		char names[n][31];
		nhap(names, n);
		sapxep(names, n);
		do {
		
			printf("Seclect your choose: \n");
			printf("1. Print the list.\n");
			printf("2. Remove a student\n");
			printf("3. Quit\n");
			printf("Your answer? ");
			scanf("%d", &choice);
			switch (choice) {
				case 1: xuat(names, n);
				        break;
				case 2: remove(names, &n);
				        break;
				case 3: printf("Goodbye");
				        break;
				default: printf("Invalid! Try again!");
				         break;
			}
		}
		while (choice != 3);
	}
	return choice;
}
