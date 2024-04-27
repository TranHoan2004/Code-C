#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 20

int main(){
	srand (time(NULL));
	int i;
	int arr[MAX];
	
	for(i=0; i<=MAX; i++){
		arr[i]=rand();
	}
	for(i=0; i<=MAX; i++)
	printf ("arr(%d)=%d\n", i, arr[i]);
	
	return 0;
}
