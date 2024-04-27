//xoa phan tu
//#include<stdio.h>
//main()
//{
//	int i,n;
//	printf("Input n= ");
//	scanf("%d",&n);
//	int a[n];
//	for (i=0;i<n;i++){
//		printf("a[%d]:",i);
//		scanf("%d",&a[i]);
//}
//	int index;
//	printf("Input index= ");
//	scanf("%d",&index);
//	for(i=index;i<n;i++) {
//		a[i]= a[i+1];
//		n--;
//	}
//	for(i=0;i<n;i++) {
//	printf("%d ",a[i]);
//	}
//}



//xoa cac phan tu la so nguyen to
#include<stdio.h>
#include<math.h>
int check(int a) {
	if(a<2)
		return 0;
	int i;
	for( i=2; i <= a/2; i++) {
		if (a% i ==0) {
			return 0;
		}
	}
	return 1;
}
main () {
	int n,i;
	printf("Input n= ");
	scanf("%d",&n);
	int a[n];
	for ( i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int c=0;
	for(i=0; i<n; i++) {
		if (check(a[i])) {
			int j;
			for( j = i; j< n; j++) {
				a[j] = a[j+1];
			}
			n--;
			i= i-1;
		}
	}
	for (i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
}


//xoa so chan
//#include<stdio.h>
//main()
//{
//	int i,n;
//	printf("Input n= ");
//	scanf("%d",&n);
//	int a[n];
//	for (i=0;i<n;i++){
//		printf("a[%d]:",i);
//		scanf("%d",&a[i]);
//}
//	int c=0;
//	for(i=0;i<n;i++) {
//		if (a[i] % 2 ==0) {  // muon xoa so le thi a[i] %2 ==0
//	for (int j=i;j<n;j++) {
//		a[j] = a[j+1];
//	}
//			n--;
//		i--;
//		}
//	}
//	for(i=0;i<n;i++) {
//	printf("%d ",a[i]);
//	}
//}




//xoa phan tu o vi tri chan/le
//#include<stdio.h>
//main()
//{
//	int i,n;
//	printf("Input n= ");
//	scanf("%d",&n);
//	int a[n];
//	for (i=0;i<n;i++){
//		printf("a[%d]:",i);
//		scanf("%d",&a[i]);
//}
//	for(i=n;i>=0;i--) {
//		if (i % 2 ==0) {  ////xoa vi tri le (i % 2 !=0)
//			for (int j=i;j<n;j++) {
//		a[j] = a[j+1];
//		
//}
//		n--;
//		
//}
//	}
//	for(i=0;i<n;i++) {
//	printf("%d ",a[i]);
//	}
//}
