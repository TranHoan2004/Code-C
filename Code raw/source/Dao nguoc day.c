//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//int Length(char s[])
//{
//	int i = 0;
//    while (s[i] != NULL)
//        ++i;
//    return i - 1;
//}
// 
// 
//void InDaoNguoc(char str[]){
//    int length = Length(str);
//    int i;
//    for ( i = length - 1; i >= 0; i--)
//    {
//        printf("%c", str[i]);
//    }
//}
//
//int main() {
//  system("cls");char s[100];
//    fgets(s, 100, stdin); // nên dùng hàm fgets
//  
//  // Fixed Do not edit anything here.
//  printf("\nOUTPUT:\n");
//  //@STUDENT: WRITE YOUR OUTPUT HERE:
//
//
//    
//    InDaoNguoc(s);
//
//
//  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//  printf("\n");
//  system ("pause");
//  return(0);
//}


#include<stdio.h>
#include<string.h>
void reverse (char []);
main(){
	char s[1001];
	printf("Input string s ");
	gets(s);
	reverse(s);
	printf("Output: %s ", s);
	
}
void reverse (char s[]){
	int i, n = strlen(s);
	char c;
	for (i=0; i<n-1-i; i++) { //viet tach ra cho de hieu
		c = s[i];
		s[i] = s[n-1-i];
		s[n-i-1] = c;
	}
}
