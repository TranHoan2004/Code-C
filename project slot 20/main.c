#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "danhmuc.h"
#include "menu.h"
int main() {
	 char stname, ltname;
	 char Class;
	
	char codes[10][10];
	char names[10][30];
	char code[30];
	int choice;
	int n= 0;
	int *pn=&n;
	int pos;
	printf(" Press enter to continue!");
	while ( getchar() != '\n' ); { 
	    printf("\tPlease press your student's information.\n"); 
		printf("First name: ");
		scanf("%s", &stname);		
		printf("Last name: ");
		scanf("%s", &ltname);		
		printf("Your class: ");
		scanf("%s", &Class); 
		printf("\n"); 

		printf("\n\n\tThis is a menu of commodities in the shop with the following options.\n");
		do {
			printf("\tPlease choose one of them.");
			printf("\n1- Add a new item.\n");
			printf("2- Print out items.\n"); 
			printf("3- Remove an item.\n");
			printf("4- Find Code.\n");
			printf("5- Print the list in ascending order.\n");
			printf("6- Exit.\n");
			printf("Your choice: ");
			scanf("%d", &choice);
			switch (choice) {
				case 1: addProduct (codes, names, pn);
					    break;
		        case 2: danhmuc(); 
		        	    break;
		        case 3: removeCode ( code, codes, names, pn);
		        	    break;
		        case 4: printf("Enter code: ");
		                scanf("%s", code);
		                printf("code position: %d\n", findCode(code, codes, n) );
		        	    break;
		        case 5: printf("Print All Product: ");
		        		print(codes,names, n);
		                break;
		        case 6: printf("Goodbye, see you again!");
		                break;
		        default: printf("Invalid, please try again!");
		                 break;
			}
		} 
		while ( choice != 6 );
		return choice;
   } 
}

