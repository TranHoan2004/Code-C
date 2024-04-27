//Doi he Decac sang Binary 

//#include <stdio.h>
//main()
//{
//	int a[100],n,i;
//	printf ("Nhap n:");
//	scanf ("%d",&n);
//	for (i=0;0<n;i++){
//		a[i]=n%2;
//		n=n/8;    // neu la tu he 10 sang he 8 (octa) thi thay 2 bang 8 va tuong tu
//	}
//	printf ("n in binary is : \n");
//	for (i=i-1;i>=0;i--){
//		printf ("%d",a[i]);
//	}
//}

//Doi he decac sang octa
#include <stdio.h>
main()
{
	void input(){int n;
	scanf("%d",&n);}
int isPrime(){int n,i;
	if(n==0) return 1;
	if(n==1) return 1;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0)	return 1;
	}
	return 0;
}

	int a[100],n,i,j;
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		for (j=2;j<=i-1;j++){
			if (i%j ==0){
			}
	for (i=0;0<n;i++){
		a[i]=n%8;
		n=n/8;    // neu la tu he 10 sang he 8 (octa) thi thay 2 bang 8 va tuong tu
	}
	for (i=i-1;i>=0;i--){
		printf ("%d",a[i]);
	}
}
}
}

