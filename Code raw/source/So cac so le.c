#include<stdio.h>

int main()
{
	int n;
	int counter;
	printf ("Nhap so n:");
	scanf ("%d", &n);
	if (n<=0){
		printf ("Chuong trinh ket thuc, hay nhap lai so n>0");
	}
	
	else{
	int i;
	for (i=1; i<=n; i+=2){
			printf ("%d,", i);
	        counter++;
	}
    printf ("\n%d co tat ca %d so le", n, counter);
	
	}
   
	return 0;
}

