#include<stdio.h>
#include<string.h>
main(){
	char ho[31], tendem[31], ten[31];
	char tentiengviet[101], tentienganh[101];
	printf("input ho:");
	gets(ho);
	printf("input ten dem:");
	gets(tendem);
	printf("input ten:");
	gets(ten);
	strcpy(tentiengviet, ho);
	strcat(tentiengviet, " ");
	strcat(tentiengviet, tendem);
	strcat(tentiengviet, " ");
	strcat(tentiengviet, ten);
	printf("\n Ten Tieng Viet: %s\n", tentiengviet);
	strcpy(tentienganh, ten);
	strcat(tentienganh, " ");
	strcat(tentienganh, ho);
	strcat(tentienganh, " ");
	strcat(tentienganh, tendem);
	printf("\n Ten Tieng Anh: %s\n", tentienganh);
}
