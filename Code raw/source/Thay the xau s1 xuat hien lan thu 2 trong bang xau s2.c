#include<stdio.h>
#include<string.h>
void replace(char[], char[], char[], int);
main(){
	char s[1001];
	char s1[102], s2[101];
	printf("input s="); gets(s);
	printf("input s1="); gets(s1);
	printf("input s2="); gets(s2);
	replace(s,s1,s2,2); // tim s1 trong s, thay the tu vi tri thu 2
	puts("");
	puts(s);
}
void replace(char s[], char s1[], char s2[], int type){
	char word[100][101], *pc;//
	char ss[1001];
	int i, k=0;
	pc=strstr(s,s1);
	while(pc!=NULL){
		strcpy(word[k], s);
		word[k++][pc-&s[0]]=0;
		strcpy(&s[0], pc+strlen(s1));
		pc=strstr(s,s1);
	}
	strcpy(word[k++], s);
	for(i=0; i<k; i++)
	puts(word[i]);
	strcpy(s,word[0]);
	if(type==0){
	}
	else if(type==-1){
	}
	else for(i=1;i<k;i++){
		if(i==type){strcat(s,s2);
		strcat(s,(i==type?s2:s1));
		strcat(s,word[i]);
	}
}
}
