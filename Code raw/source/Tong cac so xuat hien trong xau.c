#include<string.h>
int isnumber(char c){
	return (c-47)*(c-58)<0;//la ky tu so, ma ASCII cua 0...9 la 48...57 
}
int f1(char s[]){
	int sum=0;
	int i, j, p;
	for(i=0; i<strlen(s); i++){
		if(isnumber(s[i])){
			p=s[i]-48;// doi tu ky tu sang gia tri so
			j=i+1;// kiem tra tiep
			while(isnumber(s[j])){
				p=p*10+s[j]-48;// convert mot chuoi cac ky tu so thanh gia tri so that
				j++;
			}
			i=j;
			sum+=p;
		}
	}
	return sum;
}
main(){
	char s[1001];
	printf("input string s:");
	gets(s);
	printf("\ntong cac so trong s=%d", f1(s));
}
