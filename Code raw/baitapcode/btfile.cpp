#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *p,*q;
	int i,j,n,a[100];
	p=fopen("BAI1.txt","w");
	if(p==NULL){
		printf("LOI");
		return 0;
	}
	printf("nhap so phan tu: ");
	scanf("%d",&n);
	printf("nhap du lieu: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	fprintf(p,"%d\n",n);
	for(i=0;i<n;i++){
		fprintf(p,"%d ",a[i]);
	}
	p=fopen("BAI1.txt","r");
	if(p==NULL){
		printf("LOI");
		return 0;
	}
	fscanf(p,"%d",&n);
	q=fopen("BAI2.txt","w");
	if(q==NULL){
		printf("LOI");
		return 0;
	}
	for(i=0;i<n;i++){
		fscanf(p,"%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
				a[n]=a[j];
				a[j]=a[i];
				a[i]=a[n];
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
		fprintf(q,"%d ",a[i]);
	}
	fclose(p);
	fclose(q);
	return 0;
}