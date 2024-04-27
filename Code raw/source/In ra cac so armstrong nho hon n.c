#include<stdio.h>
#include<conio.h>
int main() {
	int n, i;
	printf ("n=");
	scanf("%d", &n);
	if(n <= 10){
		for(i=0 ; i<n ; i++){
		printf("%d ", i);
		}
	}
	else{
		for(i=0 ; i<10 ; i++){
			printf("%d ", i);
		}
		for(i=10 ; i<n ; i++){
			int m = i;
			int count = 0;
			while(m>0){
				m/=10;
				count++;
			}
			m = i;
			double kq = 0;
			while(m>0){
				double r = 1.0*(m%10);
				kq+=pow(r, count);
				m /= 10; 
			}
			if((kq) == i){
				printf("%d ", i);
			}
		}
	}
    return 0;}
    
