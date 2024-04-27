//Decimal to Binary thong thuong
//Cach 1:
//#include<stdio.h>
//main(){
//	int a[10], n, i;
//	printf ("input n=");
//	scanf ("%d", &n);
//	for (i=0; n>0; i++){
//		a[i]=n%2;
//		n=n/2;
//	}
//	printf ("\n n in binary is ");
//	for (i=i-1; i>=0; i--)
//	printf ("%d", a[i]);
//}

//Cach 2: Dung mang so
//#include<stdio.h>
//main(){
//	int n, k, m;
//	char a[32]; // ko dung int a[32] vi se ton nhieu khong gian
//	printf ("input n=");
//	scanf ("%d", &n);
//	k=0; // kich thuoc mang
//	m=n;
//	while (m!=0){
//		a[k++]=m%2;
//		m/=2; // (m=m/2)
//	}
//}

//END***

//Decimal to Binary co phan thap phan
//#include<stdio.h>
//int main (){
//	int i=0, j=0, k, n, m;
//	printf ("Nhap phan nguyen n:");
//	scanf("%d", &n);
//	int arr[32];
//	while (n!=0){
//		arr[i]=n%2;
//		i++;
//		n/=2;
//	}
//	printf ("Nhap phan thap phan m:");
//	scanf ("%d", &m);
//	int arr1[32];
//	while (m!=0){
//		arr1[j]=m%2;
//		j++;
//    	m/=2;
//	}
//	for (k=i-1; k>=0; k--) printf ("%d", arr[k]);
//	printf (".");
//	for (k=i-1; k>=0; k--) printf ("%d", arr1[k]);
//}



