#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int menu() {
	//add a new item, inputted data are local variables
} 
void add (char codes[][9], char names[][21], int prices[], char categories[][13], int*pn) {
	//print out items of a know category (in ra san pham cua 1 danh muc da biet
} 
void prinACategory (char cat[], char codes[][9], char names[][21], int prices[], char categories[][13], int n) {
	
}
int findCode(char code[], char codes[][9], int n) {
	
}
void removePos (int pos, char codes[][9], char names[][21], int prices[], char categories[][13], int* pn) {
	
}
void sort(char codes[][9], char names[][21], int prices[], char categories[][13], int n) {
	/* Print all the list to the monitor */
}
void print(char codes[][9], char names[][21], int prices[], char categories[][13], int n) {
	/* Sort the list based on categories then names*/
}
void danhmuc() {
	int chon;
	printf("\n\n\tThis is a category of commodities in the shop.\n\tPlease choose one of them ");
	do {
			printf("\n1- Add a new item.\n");
			printf("2- Print out items.\n"); 
			printf("3- Remove an item.\n");
			printf("4- Print the list in ascending order.\n");
			printf("5- Exit.\n");
			printf("Your choice: ");
			scanf("%d", &choice);
			switch (choice) {
				case 1: printf("Chua xong");
					    break;
		        case 2: printf("Chua xong"); 
		        	    break;
		        case 3: printf("Chua xong");
		        	    break;
		        case 4: printf("Chua xong");
		        	    break;
		        case 5: printf("Goodbye, see you again!");
		                break;
		        default: printf("Invalid, please try again!");
		                 break;
			}
	}
} 
int main() {
	char stname, ltname;
	char Class; 
	int choice;
	printf("                    Press enter to continue!");
	while ( getchar() != '\n' ); { 
	    printf("\tPlease press your student's information.\n"); 
		printf("First name: ");
		scanf("%s", &stname);		
		printf("Last name: ");
		scanf("%s", &ltname);		
		printf("Your class: ");
		scanf("%s", &Class); 
		printf("\n"); 
		
		printf("\n\n\tThis is a menu of commodities in the shop with the following options.\n\tPlease choose one of them ");
		do {
			printf("\n1- Add a new item.\n");
			printf("2- Print out items.\n"); 
			printf("3- Remove an item.\n");
			printf("4- Print the list in ascending order.\n");
			printf("5- Exit.\n");
			printf("Your choice: ");
			scanf("%d", &choice);
			switch (choice) {
				case 1: printf("Chua xong");
					    break;
		        case 2: printf("Chua xong"); 
		        	    break;
		        case 3: printf("Chua xong");
		        	    break;
		        case 4: printf("Chua xong");
		        	    break;
		        case 5: printf("Goodbye, see you again!");
		                break;
		        default: printf("Invalid, please try again!");
		                 break;
			}
		} 
		while ( choice != 5 );
    }
	return choice; 
} 




