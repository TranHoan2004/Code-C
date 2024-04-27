#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


main(){

int a,b,n;
char in[10001];
void cnv0(int n, int x){
	int i,j; char a[10001];
		for(i=0;n!=0;i++){
			a[i]=(char)(n%x+48);
			if(n%x>9) a[i]+=7;
			n/=x;
		}
	for(j=i-1;j>=0;j--) printf("%c",a[j]);
	return;
}

int cnv10(char a[10001],int t){
	int i=0,j,k=0;
	for(i=0;i<strlen(a);i++){
		if(a[i]>'@') a[i]-=7;
		k+=(((int)a[i]-48)*pow(t,strlen(a)-i-1));		
	}
	return k;
}

a=32
;
b=2;

if(a==10){
	scanf("%d",&n);
	printf("Result: ");
	cnv0(n,b);
}

if(b==10){
	gets(in);
	printf("Result: ");
	printf("%d",cnv10(in,a));
}

if(a!=10&&b!=10){
	gets(in);
	printf("Result: ");
	cnv0(cnv10(in,a),b);
}


}

