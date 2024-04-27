#include<stdio.h>
int main(){
	int i,n,a[1000];
	printf("Nhap so so can biet trong day Fibonacci (nho hon 46):  ");
	scanf("%d",&n);
	if(n<=0||n>=47) return 0;
	else if(n==1) printf("1 ");
	else if(n==2) printf("1 1 ");
	else{
		a[0]=1;
		a[1]=1;
		printf("%d %d ",a[0],a[1]);
		for(i=2;i<n;i++){
			a[i]=a[i-1]+a[i-2];
		    printf("%d ",a[i]);
		    if(i%5==0) printf("\n");
		}
	}
}