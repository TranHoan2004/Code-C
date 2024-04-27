#include<stdio.h>
#include<string.h>
int main()
{
//khai bao
	char ho[31], tendem[31], ten[31];
	char tenTiengViet[101],tenTiengAnh[101];
	printf("Dien ho: ");
	gets(ho);
	printf("Dien ten dem: ");
	gets(tendem);
	printf("Dien ten: ");
	gets(ten);      
	strcpy(tenTiengViet,ho);

	strcat(tenTiengViet," ");
	strcat(tenTiengViet,tendem);
	strcat(tenTiengViet," ");
	strcat(tenTiengViet,ten);
	printf("\nTen tieng Viet la: %s \n", tenTiengViet);

	strcpy(tenTiengAnh,ten);
	strcat(tenTiengAnh," ");
	strcat(tenTiengAnh,ho);
	strcat(tenTiengAnh," ");
	strcat(tenTiengAnh,tendem);
	printf("\nTen tieng Anh la: %s \n", tenTiengAnh);
}
