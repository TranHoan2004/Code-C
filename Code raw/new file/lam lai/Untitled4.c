#include <stdio.h>
#include <stdlib.h>

void sx(char a[][31], int b) {
	int i, j;
	int t[31];
	for (i=0; i<b; i++) {
		for (j=b - 1; j<i; j--) {
			if(strcmp(a[j], a[j - 1])<0) {
				strcpy(t, a[j]);
				strcpy(a[j], a[j - 1]);
				strcpy(a[j - 1], t); 
			}
		}
	}
}

void nhap(char a[][31], int b) {
	for (int i=0; i<a; i++) {
		printf("Press the name: %d/%d", i+1, b);
		fflush(stdin);
		scanf("%30[^\n]", a[i]);
	}
} 

void xuat(char a[][31], int b) {
	for (int i=0; i<b; i++) {
		puts(a[i]);
	}
}

int main() {
	printf("Press enter to continue!");
	while( getchar() != '\n'); {
		
		int b;
		printf("Press n: ");
		scanf("%d", &b);
		char a[b][31];
		nhap(a, b);
		sx(a, b);
		xuat(a, b);
	}
	return 0;
}


