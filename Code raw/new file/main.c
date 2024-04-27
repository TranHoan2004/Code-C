#include <stdio.h>
#include <stdlib.h>

//sap xep
void sapxep( char names[][31], int n) {
	int i, j;
	char t[31];
	for (i=0; i<n- 1; i++) {
		for (j=n - 1; j>i; j--) {
			if (strcmp(names[j], names[j - 1])<0) {
				strcpy(t, names[j]);
				strcpy(names[j], names[j - 1]);
				strcpy(names[j - 1], t);
			}
		}
	}
}

void nhap(char names[][31], int n) {
	for (int i=0; i<n; i++) {
		printf("Press %d/%d: ", i+1, n);
		fflush(stdin);
		scanf("%30[^\n]", names[i]);
		strupr(names[i]);
	}
}

void xuat( char names[][31], int n) {
	int i;
	for (i=0; i<n; i++) puts(names[i]);
}

void add(char names[][31], int *pn){
	char str[31];
	fflush(stdin);
	printf("Enter the new: ");
	scanf("%30[^\n]", str);
	strcpy(names[*pn], str);
	(*pn)++;
	printf("Success!\n");
}

void search(char names[][31], int n) {
	char str[31];
	fflush(stdin);
	printf("enter: ");
	scanf("%30[^\n]", str);
	int found=0;
	for (int i=0; i<n; i++) {
		if (strcmp (names[i], str) == 0) {
			found =1;
			printf("Position: %d\n", i);
			break;
		}
		
	}
	if (!found) {
			printf("Error 404\n");
	}
} 




void Remove(char names[][31], int *pn) {
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
	
	int n;
	printf("n: ");
	scanf("%d", &n);
	char names[n][31];
	nhap(names, n);
	sapxep(names, n);
	int choice;
	
	do {
		printf("\nMenu: ");
		printf("\n1. Add a new string: ");
		printf("\n2. Remove a string: ");
		printf("\n3. Search a string: ");
		printf("\n4. Print the list: ");
		printf("\n5. Quit ");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		getchar();
		switch (choice) {
			case 1: add(names, &n);
			        break;
			case 2: Remove(names, &n);
			        break;
			case 3: search(names, n);
			        break;
			case 4: xuat(names, n);
			        break;
			case 5: printf("Goodbye!\n");
			        break;
			default: printf("Invalid choice! Try again!");
			         break;
		}
	}
	while (choice!=5);
	return choice;	
}
