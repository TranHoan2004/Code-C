#include<stdio.h>
#include<string.h>
int mystrlen(char s[]);
int mystrcmp(char s1[], char s2[]);
main(){
	char name[31]= "Nguyen Van A";
	char id[31];
	printf("do dai cua chuoi name ban dau=%d", mystrlen(name));
	printf("\ninput id student:");
	gets(id);
	printf("so sanh chuoi %s voi chuoi %s = %d", name, id, mystrcmp(name, id));
}
int mystrlen(char s[]){
	int i=0;
	while(s[i]!=0) i++;
	return 1;
}
int mystrcmp(char s1[], char s2[]){
	int i=0;
	while(s1[i]==s2[i]&&i<mystrlen(s1)&&i<mystrlen(s2)) i++;
	if(i==mystrlen(s1)&&i==mystrlen(s2)) return 0;
	else if (s1[i]>s2[i]) return 1;
	else return -1;
}
