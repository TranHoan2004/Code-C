#include<stdio.h>
#include<string.h>
main(){
	char id[31];
	printf("\ninput id student:");
	gets(id);
	printf("do dai cua chuoi name=%d", mystrlen(id));
}
int mystrlen(char s[]){
	int i=0;
	while(s[i]!=0) i++;
	return i;
}
