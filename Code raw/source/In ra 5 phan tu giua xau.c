#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main(){	
	int i;
	int n;
 	char s[100];
 	scanf("%s",s);
 	int length = strlen(s);
 	n=length-((length-5)/2);
 	for(i=((length-5)/2);i<n;i++){
 		printf("%c",s[i]);

}

	return 0;
}

