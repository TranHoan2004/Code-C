#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int danhmuc() {
	    // Khai bao và khoi tao du lieu sach
    printf("Category of normal goods.\n");
    char tenSach[][50] = {"Lap trinh tu A-Z", "Cam nang cuoc song", "Ehehehehe"};
    char maSoSach[][10] = {"123", "456", "789"};
    int soThuTu[] = {1, 2, 3};
    int soSach = sizeof(tenSach) / sizeof(tenSach[0]);

    // In bang sach
    printf("\n");
    printf("-----------------------------------------\n");
    printf("STT   Ma so           Ten san pham binh thuong\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < soSach; i++) {
        printf("%-6d%-18s%s\n", soThuTu[i], maSoSach[i], tenSach[i]);
    }
    printf("-----------------------------------------\n");


    char TenSach[][50] = {"Smartphones", "Tablet", "Laptop"};
    char MaSoSach[][10]= {"441", "442", "443"};
    int SoThuTu[] = {1, 2, 3};
    int SoSach = sizeof(TenSach) / sizeof(TenSach[0]);

    // In bang sách
    printf("Category of electronic devices\n");
    printf("-----------------------------------------\n");
    printf("STT   Ma so            Ten thiet bi\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < soSach; i++) {
        printf("%-6d%-18s%s\n", SoThuTu[i], MaSoSach[i], TenSach[i]);
    }
    printf("-----------------------------------------\n");


    char t[][50] = {"Pencils", "Pens", "Rulers"};
    char m[][10] = {"221", "222", "223"};
    int s[] = {1, 2, 3};
    int k = sizeof(t) / sizeof(t[0]);

    // In bang sach
    printf("Category of stationery:\n");
    printf("-----------------------------------------\n");
    printf("STT   Ma so            Ten van phong pham\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < k; i++) {
        printf("%-6d%-18s%s\n", s[i], m[i], t[i]);
    }
    printf("-----------------------------------------\n");
}


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

