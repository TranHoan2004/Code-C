#include<stdio.h>
#include<math.h>
//khai bao ham check
int check (int n){
   int sqr = sqrt(n);
    if(sqr*sqr != n) return 0;
	else return 1; 
}
 main(){
 	int a[100], n, i, index, k, p, count;
 	printf ("input size of array n=");
 	scanf ("%d", &n);
 	printf ("input array \n");
 	for (i=0; i<n; i++){
 		printf ("a[%d]=", i);
 		scanf ("%d", &a[i]);
	 }
	 printf ("\n Array before change \n");
	 
	 for (i=0; i<n; i++){
	 printf ("%d ", a[i]);}
	 for (i=0; i<n; i++){
	 	if (check (a[i])==1) a[i]=99;
	 }
	printf ("\n Array after change\n");
	for (i=0; i<n; i++){
			printf ("%d ", a[i]);
	}
 }
 
