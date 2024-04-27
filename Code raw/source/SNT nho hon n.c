#include<conio.h>
#include<stdio.h>
#include<math.h>

int SNT(x){
	 if (x<2)
   return 0;
    int i;
   	for (i=2; i<=sqrt(x); i++){
   		if (x%i==0)
    	return 0;
	   }
   	
    return 1;
}
  
   
void SNTnhohonn(n){
	int i;
	for (i=0; i<=n; i++)
	if (SNT(i))
	printf ("\nCac so nguyen to nho hon %d:%d", n, i);
}
int main (){
	int n;
	printf ("Nhap n=");
	scanf ("%d", &n);
	SNTnhohonn(n);
}
       
