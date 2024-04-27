#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
void addProduct (char codes[][9], char names[][21], int*pn) {
	//them san pham
	printf("Enter the product code: ");
	scanf("%s[^\n]", codes[*pn]);
	printf("Enter the product name: ");
	scanf("%s[^\n]", names[*pn]);
	++(*pn);
	printf("Success!\n");
} 
int findCode(char code[], char codes[][10], int n) {
    
    for (int i = 0; i < n; i++) {
        if (strcmp(code, codes[i]) == 0) {
            return i;
        }
        
    }
    return -1;
}

void removeCode ( char code[10],char codes[10][10], char names[10][30], int* pn) {
	/* Sort the list based on categories then names*/
	printf("Enter Code Remove: ");
	scanf("%s", code);
	int found=0;
	for (int i=0; i<(*pn); i++) {
		if (strcmp (codes[i], code) == 0) {
			found =1;
			for (int j=i; j<(*pn)-1; j++) {
				strcpy(names[j], names[j + 1]);
				strcpy(codes[j], codes[j + 1]);
			}
			--(*pn);
			printf("Success!\n");
			break;
		}
		
	}
	if (!found) {
		printf("Error 404\n");
	}
}
void print(char codes[][9], char names[][21], int n) {
   int i;
   if(n!=0) {
   		printf("Product List: \n");
   		for(i=0;i<n;i++){
   			printf("San Pham %d:\nCode: %s\nName: %s\n", i, codes[i],names[i] );
		   }
   }
}
