// in ra n,p,q snt,fibo,palin,amstrong voi p so<n,q so>n
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int is_Prime(int a);
int is_Fibonacci(int n);
int is_Armstrong(int n);
int is_Palindrome(int n);
int main () {
	int i, n, p, q, count=0;
	printf("n = ");scanf("%d", &n);
	printf("p = ");scanf("%d", &p);
	printf("q = ");scanf("%d", &q);
// Prime number
printf("Prime numbers:\n");
	for(i=n-1;count<q;i--){
		if(is_Prime(i)==1){
			count++;
			printf("%d ", i);
		}
	}printf("\n");
	count=0;
	for(i=n+1;count<p;i++){
		if(is_Prime(i)==1){
			count++;
			printf("%d ", i);
		}
	}printf("\n");
// Fibonacci numbers
printf("Fibonacci numbers:\n");
	count=0;
	for(i=n-1;count<q;i--){
		if(is_Fibonacci(i)==1){
			count++;
			printf("%d ", i);
		}
	}printf("\n");
	count=0;
	for(i=n+1;count<p;i++){
		if(is_Fibonacci(i)==1){
			count++;
			printf("%d ", i);
		}
	}printf("\n");
//Armstrong numbers
printf("Armstrong numbers:\n");
	count=0;
	for(i=n-1;count<q;i--){
		if(is_Armstrong(i)==1){
			count++;
			printf("%d ", i);
		}
	}printf("\n");
	count=0;
	for(i=n+1;count<p;i++){
		if(is_Armstrong(i)==1){
			count++;
			printf("%d ", i);
		}
	}printf("\n");
//Palidrome numbers
printf("Palindrome numbers:\n");
	count=0;
	for(i=n-1;count<q;i--){
		if(is_Palindrome(i)==1){
			count++;
			printf("%d ", i);
		}
	}printf("\n");
	count=0;
	for(i=n+1;count<p;i++){
		if(is_Palindrome(i)==1){
			count++;
			printf("%d ", i);
		}
	}printf("\n");
   return(0);
}
int is_Prime(int a){
	int i;
	if(a == 1) return (0);
	if(a == 0) return (0);
	for (i=2; i <= sqrt(a); i++){
		if(a % i==0) return (0);		
	}
	return(1);
}
int is_Fibonacci(int n){
	int a = 0;
    int b = 1;
    if (n==a || n==b) return 1;
    int c = a+b;
    while(c<=n)
    {
        if(c == n) return 1;
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
int is_Armstrong(int n){
	
	int  originalNum, remainder, i = 0;
   float result = 0.0;


   originalNum = n;

   // store the number of digits of num in n
   for (originalNum = n; originalNum != 0; ++i) {
       originalNum /= 10;
   }

   for (originalNum = n; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, i);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == n)
    return 1;
   else
    return 0;
}
int is_Palindrome(int n){
	int reversedN = 0, remainder, originalN;
   
    originalN = n;

    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
        return 1;
    else
        return 0;
}
