#include<stdio.h>
/*
int main(){
	int a,b,*p,*q;
	p=&a;
	q=&b;
	scanf("%d %d",&a,&b);
	printf("%d %d %d %d",*p+*q,*p-*q,*p**q,*p/ *q); 
} 
*/
/*
int main(){
	int n,i,j,*m,tam=0,sum=0;
	scanf("%d",&n);
	int a[100];
	m=a; 
	for(i=0;i<n;i++){
		scanf("%d",m+i);
		sum+=*(m+i); 
	} 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(*(m+i)>*(m+j)){
				tam=*(m+j);
				*(m+j)=*(m+i);
				*(m+i)=tam; 
			} 
		}  
	}
	for(i=0;i<n;i++){
		printf("%d ",*(m+i));
	}
	printf("\n%d",sum); 
	return 0;
}
*/
//int main(){
//	fflush(stdin);
//	int i,j,n,a[50][50],*p;
//	p=(int *)a+i*n+j;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			scanf("%d",p);
//		}
//	}
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("%d ",p);
//		}
//	}
//}