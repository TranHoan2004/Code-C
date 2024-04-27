#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp= *a;
	*a= *b;
	*b=temp;
}
int main(){
	int x=8;
	int y=11;
	printf ("truoc khi dao: %d %d\n", x, y);
	swap(&x, &y);
	printf("sau khi dao:%d %d\n", x, y);
}
