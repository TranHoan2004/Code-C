#include<stdio.h>
#include<math.h>
int cp(int n){
	int m=sqrt(n);
	if(m*m==n) return 1;
	return 0;
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
		if(cp(a[i])==1) count++;
		if(count==2){
			pos=i;
			for(i=n+2; i>pos; i--){
				a[i]=a[i-3];
			}
			a[pos]=0;
			a[pos+1]=0;
			a[pos+2]=0;
			n++;
			i++;
		}
	}
	for(i=0; i<n+2; i++){
		printf("%d ", a[i]);
	}
}
