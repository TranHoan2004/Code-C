#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

// Bai1: in ra 3 so NT sau n.//////////////////////////////////

//int main (){
//	int n,i,count=0;
//	printf("Nhap n: ");
//	scanf("%d",&n);
//	printf("\n3 so nguyen to sau %d la: ",n);
//	
//	for ( i=n;i<(n*n);i++){
//		if(isPrime(i)==1){
//		printf ("%d ",i);
//		++count;
//		if(count == 3) { break;}
//		}
//	}
//return 0;
//}
//
//int isPrime(int n){
//	int i;
//	if(n<2) return 0; //Neu n<2 thi out
//	
//	for(i=2; i<=sqrt(n); i++){
//		if(n%i==0) return 0; // nhung so khong phai so NT
//	}
//	return 1; // con lai la so NT
//}



//Bai 2: In 2 so NT: 1 so lon hon n va 1 so be hon n.//////////////////////////////////
//
//int isPrime(int n){
//	int i;
//	if(n<2) return 0; //Neu n<2 thi out
//	
//	for(i=2; i<=sqrt(n); i++){
//		if(n%i==0) return 0; // nhung so khong phai so NT
//	}
//	return 1; // con lai la so NT
//}
//int main (){
//	int i,n,count=0;
//	printf("Nhap n: ");
//	scanf("%d",&n);
//	printf("\nso nguyen to sau %d la: ",n);	
//	for ( i=n;i<=(n*n);i++){
//		if(isPrime(i)==1){
//		printf ("%d ",i);
//		count++;
//		if(count == 1) { break;}
//		}
//	}
//	
//	i=0;
//	count=0;
//	
//	printf("\nso nguyen to truoc %d la: ",n);	
//	for ( i=n;i>=2;i--){
//		if(isPrime(i)==1){
//		printf ("%d ",i);
//		count++;
//		if(count == 1) { break;}
//		}
//	}
//return 0;
//}



//Bai 3: In 4 so NT: 2 so lon hon n va 2 so be hon n.//////////////////////////////////

//int isPrime(int n){
//	int i;
//	if(n<2) return 0; //Neu n<2 thi out
//	
//	for(i=2; i<=sqrt(n); i++){
//		if(n%i==0) return 0; // nhung so khong phai so NT
//	}
//	return 1; // con lai la so NT
//}
//int main (){
//	int i,n,count=0;
//	printf("Nhap n: ");
//	scanf("%d",&n);
//	printf("\n2 so nguyen to sau %d la: ",n);	
//	for ( i=n;i<=(n*n);i++){
//		if(isPrime(i)==1){
//		printf ("%d ",i);
//		count++;
//		if(count == 2) { break;}
//		}
//	}
//	
//	i=0;
//	count=0;
//	
//	printf("\n2 so nguyen to truoc %d la: ",n);	
//	for ( i=n;i>=2;i--){
//		if(isPrime(i)==1){
//		printf ("%d ",i);
//		count++;
//		if(count == 2) { break;}
//		}
//	}
//return 0;
//}

//Bài 4: Nhap n, in ra các so Fibonacci nho hon n.

//int main() {  
// int n1=0,n2=1,n3,i,n;  
// printf("Nhap n = ");
// scanf("%d",&n); 
// printf("\nDay so Fibonacci truoc so %d la : ",n);  
//  
// printf("\n%d %d",n1,n2);  //in hai so 0 va 1  
//  
// while(n1+n2<n)   
// {  
//  n3=n1+n2;  
//  printf(" %d",n3);  
//  // tra lai gia tri ban dau cho n1, n2
//  n1=n2;  
//  n2=n3;  
// }  
// return 0;
// }
 
//Bai 5:  In ra 2 so Fibonacci nho hon n

//int main() {  
// int a[];
// int n1=0,n2=1,n3,i,n;  
// printf("Nhap n = ");
// scanf("%d",&n); 
//  
// 
// for (i=0;i=10;i++){
// while(n1+n2<n)   
// {  
//  n3=n1+n2;  
//  a[i]=n3; 
////  printf(" %d",n3);  
//  // tra lai gia tri ban dau cho n1, n2
//  n1=n2;  
//  n2=n3;  
// }  
// }
// return 0;
// }
//
////Bai 6: In ra 6 so Amstrong gom: 3 so nho hon n va 3 so lon hon n
//int CountDigit(int n) //Ham kiem tra so chu so cua n 
//{
//    int count = 0;
//    while (n > 0)
//    {
//        n /= 10; // tang count khi chia n cho 10
//        ++count;
//    }
//    return count;
//}
//
//int IsArmstrong(int n) //Ham kiem tra so Amstrong
//{
//    int numDigit = CountDigit(n);
//    int tmp = n, sum = 0, last;
//    while (tmp > 0)
//    {
//        last = tmp % 10; // lay chu so cu?i cùng
//        tmp /= 10;       // xoa chu so cu?i cùng
//        sum += pow(last, numDigit);
//    }
//    if (sum == n) //Neu tong bang n suy ra n la Amstrong
//        return 1;
//    return 0;
//}
//
//int main(){
//    int n,i,count=0;
//    printf("Nhap n = ");
//    scanf("%d", &n);
//    
//    printf("\n3 so Amstrong lon hon n la: ");
// 	for(i=n;i<=(n*n);i++){
//    if (IsArmstrong(i) == 1){
//        printf("%d ",i);
//        count++;
//        if(count==3){break;}
//    	}
//    }
//    
//    i=0; count=0;
//    printf("\n3 so Amstrong nho hon n la: ");
// 	for(i=n;i>=0;i--){
//    if (IsArmstrong(i) == 1){
//        printf("%d ",i);
//        count++;
//        if(count==3){break;}
//    	}
//    }
//}
