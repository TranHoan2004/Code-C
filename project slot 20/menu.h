#ifndef MENU_H
#define MENU_H
void addProduct (char codes[][9], char names[][21], int*pn);
int findCode(char code[], char codes[][10], int n);
void removeCode ( char code[10],char codes[10][10], char names[10][30], int* pn);
void print(char codes[][9], char names[][21], int n);
   /* Sort the list based on categories then names*/
#endif
