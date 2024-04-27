#include<stdio.h>
#include<math.h>
int nt(int n){
	int i, m=sqrt(n);
	if (n<2) return 0;
	for (i=2; i<=m; i++)
	if (n%i==0) return 0;
	return 1;
}
int main(){
	int a[100];
	int i=0, n, count=0, pos;
	scanf ("%d", &n);
	for(i=0; i<n; i++){
		printf ("a[%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	for(i=n; i>0; i--){
		if(nt(a[i])==1) count++;
		if(count==2){
			pos=i;
			for(i=n+1; i>pos; i--){
				a[i]=a[i-2];
			}
			a[pos+1]=0;
			a[pos+2]=0;
			n++;
			i++;
		}
	}
	for(i=0; i<n+1; i++){
		printf("%d ", a[i]);
	}
}
