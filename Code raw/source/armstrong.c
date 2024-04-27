#include <stdio.h>
#include <math.h>
#define MAX 10000

int kTraArmstrong(int n){
	int k=0,a[MAX]={},m;
	m=n;
	while (m!=0){
		a[k]=m%10;
		k++;
		m/=10;
	}
	int i;
	for ( i=0; i<=k; i++){
		m=m+pow(a[i],k);
	}
	
	if (n==m)
		return 1;
	else return 0;
}
int main()
{
	int a[MAX],x;
	x++;
	int j;
	for ( j=1;j<x; j++){
		if (kTraArmstrong(j))
			a[j]=1;
		else a[j]=0;
	}
	for (j=1; j<x;j++){
		if (a[j])
			printf ("%d ", j);
	}
}

//int main(){
//	int x;
//	scanf("%d", &x);
//	lietKeArmstrong(x);
//	return 0;
//}
