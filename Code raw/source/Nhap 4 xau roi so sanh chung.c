#include<stdio.h>
#include<string.h>
main(){
	char s1[31], s2[31], s3[31], s4[31], temp[31];
	printf("input ten1:");
	gets(s1);
	printf("input ten2:");
	gets(s2);
	printf("input ten3:");
	gets(s3);
	printf("input ten4:");
	gets(s4);// khai bao
	
	if(strcmp(s1,s2)>0){
		strcpy(temp,s1);
		strcpy(s1,s2);
		strcpy(s2,temp);
	}
	if(strcmp(s1,s3)>0){
	strcpy(temp,s1);
	strcpy(s1,s3);
	strcpy(s3,temp);
}
	if(strcmp(s1,s4)>0){
	strcpy(temp,s1);
	strcpy(s1,s4);
	strcpy(s4,temp);
}
  if(strcmp(s2,s3)>0){
	strcpy(temp,s2);
	strcpy(s2,s3);
	strcpy(s3,temp);
}
    if(strcmp(s2,s4)>0){
	strcpy(temp,s2);
	strcpy(s2,s4);
	strcpy(s4,temp);
}
    if(strcmp(s3,s4)>0){
	strcpy(temp,s3);
	strcpy(s3,s4);
	strcpy(s4,temp);
}
printf("\nten thu nhat:%s\n", s1);
printf("\nten thu nhat:%s\n", s2);
printf("\nten thu nhat:%s\n", s3);
printf("\nten thu nhat:%s\n", s4);
}
