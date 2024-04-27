// Cach 1
//#include <stdio.h>
//
//int main(){
//    int a,b,uc,bc;
//    printf("Nhap (a,b): ");
//    scanf("%d%d",&a,&b);
//    for (uc=a;uc>=1;uc--){
//        if (a%uc==0 && b%uc==0){
//            printf("UCLN(%d,%d)=%d\n",a,b,uc);
//            break;
//        }
//    }
//    for (bc=a;bc<=a*b;bc++){
//        if (bc%a==0 && bc%b==0){
//            printf("BCNN(%d,%d)=%d\n",a,b,bc);
//            break;
//        }
//    }
//    return 0;
//}

// Cach 2
//
//#include <stdio.h>
//
//int UCLN(int a,int b){
//    if (a%b!=0)
//        return UCLN(b,a%b);
//    else
//        return b;
//}
//
//int BCNN(int a,int b){
//    return (a*b)/UCLN(a,b);
//}
//
//int main(){
//    int a,b,ucln,bcnn;
//    printf("Nhap (a,b): ");
//    scanf("%d %d",&a,&b);
//    ucln = UCLN(a,b);
//    printf("UCLN(%d,%d)=%d\n",a,b,ucln);
//    bcnn = BCNN(a,b);
//    printf("BCNN(%d,%d)=%d\n",a,b,bcnn);
//    return 0;
//}

//Cach 3
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int gcd(int m, int n) {
//	int k;
//	if (m<n) {
//		k=m;m=n;n=k;
//	}
//	while (n>0) {
//		k = m%n;
//	m=n;
//	n=k;
//	}
//	return (m);
//}
//int lcm(int m, int n) {
//	return(m*n/gcd(m,n));
//}
//int main () {
//	int m,n,k,h;
//	printf ("Enter m = "); scanf("%d", &m);
//	printf ("Enter n = "); scanf("%d", &n);
//	k = gcd (m,n);
//	h = lcm (m,n);
//	printf ("gcd(%d, %d) = %d\n",m,n,k);
//	printf ("lcm(%d, %d) = %d\n",m,n,h);
//}
