#include<stdio.h>

void Tinh(int n){
	int a[100][100],i,j=0,i1,j1,m=0,count,n1=n;
	a[0][0]=1;
	for(i=0;i<n;i++){
		i1=i,j1=j,count=1;
		while(j1<n-1){
			a[i1][j1+1]=a[i1][j1]+1;
			j1++;
		}
		while(i1<j1){
			a[i1+1][j1]=a[i1][j1]+1;
			i1++;
		}
		if(i1==j1){
			count++;
			while(j1>0){
				a[i1][j1-1]=a[i1][j1]+1;
				j1--;
			}
		}
		if(j1==0){
			while(i1>1){
				a[i1-1][j1]=a[i1][j1]+1;
				i1--;
			}
		}
		j++;
		n--;
		a[i1][j1+1]=a[i1][j1]+1;
		if(count==n) break;
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n1;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	Tinh(2);
}