#include <stdio.h>
#include <stdlib.h>

void sx(char a[][31], int b) {
	int i, j;
	int t[31];
	for (i=0; i<b - 1; i++) {
		for (j=b - 1; j>i; j--) {
			if(strcmp(a[j], a[j - 1])<0) {
				strcpy(t, a[j]);
				strcpy(a[j], a[j - 1]);
				strcpy(a[j - 1], t); 
			}
		}
	}
}

void nhap(char a[][31], int b) {
	for (int i=0; i<b; i++) {
		printf("Press the name %d/%d: ", i+1, b);
		fflush(stdin);
		scanf("%30[^\n]", a[i]);
	}
} 

void xuat(char a[][31], int b) {
	for (int i=0; i<b; i++) {
		puts(a[i]);
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
	printf("Press enter to continue!");
	while( getchar() != '\n'); {
		
		int b;
		int choice;
		char ans[3];
		printf("Press n: ");
		scanf("%d", &b);
		char a[b][31];
		nhap(a, b);
		
		do {
			
			printf("Choose your opinion: ");
			printf("\n1. Print the list of students.\n");
			printf("2. Remove a student.\n");
			printf("3. Quit.\n");
			printf("Which one do u want to choose? "); 
			scanf("%d", &choice);
			getchar();
			switch (choice) {
				case 1: sx(a, b);
		                xuat(a, b);
		                break;
		        case 2: Remove(a, &b);
		                printf("Do you want to delete another? ");
		                scanf("%s", &ans[3]);
		                
		                strupr(ans);
		                while (ans[3] != "YES" && "NO") {
		                	if (ans[3] == "YES") {
		                	  sx(a, b);
		                	  for (int i=0; i<a; i++) {
		                		  puts(a);
							  }
						    }
						    else if (ans[3] == "NO") {
							      printf("Goodbye! See you later!");
						    }
						}
		                break;
		        case 3: printf("Goodbye! See you later!");
		                break;
		        
			}
			
		} 
		while (choice != 3);
	}
	return 0;
}
