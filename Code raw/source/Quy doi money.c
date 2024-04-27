#include<stdio.h>

main(){
	int n;
	int s1, s2, s3, s4, s5, s6, s7, s8, s9;
	printf ("Nhap n (Nghin dong)");
	scanf ("%d", &n);
	s1=n/500;
	s2=(n%500)/200;
	s3=(n-s1*500-s2*200)/100;
	s4=(n-s1*500-s2*200-s3*100)/50;
	s5=(n-s1*500-s2*200-s3*100-s4*50)/20;
	s6=(n-s1*500-s2*200-s3*100-s4*50-s5*20)/10;
	s7=(n-s1*500-s2*200-s3*100-s4*50-s5*20-s6*10)/5;
	s8=(n-s1*500-s2*200-s3*100-s4*50-s5*20-s6*10-s7*5)/2;
	s9=(n-s1*500-s2*200-s3*100-s4*50-s5*20-s6*10-s7*5-s8*2);
	printf( "\nSo tien menh gia 500k:%d", s1);
	printf( "\nSo tien menh gia 200k:%d", s2);
	printf( "\nSo tien menh gia 100k:%d", s3);
	printf( "\nSo tien menh gia 50k:%d", s4);
	printf( "\nSo tien menh gia 20k:%d", s5);
	printf( "\nSo tien menh gia 10k:%d", s6);
	printf( "\nSo tien menh gia 5k:%d", s7);
	printf( "\nSo tien menh gia 2k:%d", s8);
	printf( "\nSo tien menh gia 1k:%d", s9);
	return 0;
}
