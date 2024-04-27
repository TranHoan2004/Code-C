#include <stdio.h>
#include<math.h>
//khai bao ham check
int SNT(int n){
	int i;
	if(n<2) return 0;
	for(i=2; i<sqrt(n); i++)
	if(n%i==0) return 0;
	return 1;
}
int cp(int n){
	int x=sqrt(n);
	if(x*x==n){
		return 1;
	}
	else return 0;
}
int main(){
	int i=0, n, j, count=0, count1=0;
	printf ("n=");
	scanf ("%d", &n);
	int a[n], k;
	for(i=0; i<n; i++){
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		if(SNT(a[i])==1){
//			count++;
//			if (count==2){// so thu tu
			for(j=0; j<n; j++){
				if(cp(a[j])==1){
//					count1++;
//					if(count1==2){// so thu tu
					k=a[i];
					a[i]=a[j];
					a[j]=k;
					break;
				}
			}
//		}
			break;
		}
	}
//}
	for(i=0; i<n; i++){
		printf (" %d", a[i]);
	}
}

