#include <stdio.h>
#include <stdlib.h>

void sapxep( char names[][31], int n) {
	int i, j;
	char t[31];
	for (i=0; i<n- 1; i++) {
		for (j=n - 1; j>i; j--) {
			if (strcmp(names[j], names[j - 1])<0) {
				strcpy(t, names[j]);
				strcpy(names[j], names[j - 1]);
				strcpy(names[j - 1], t);
			}
		}
	}
}

void nhap(char names[][31], int n) {
	for (int i=0; i<n; i++) {
		printf("Press %d/%d: ", i+1, n);
		fflush(stdin);
		scanf("%30[^\n]", names[i]);
		strupr(names[i]);
	}
}

void xuat( char names[][31], int n) {
	int i;
	for (i=0; i<n; i++) puts(names[i]);
}

int main() {
	printf("Press enter to continue!");
	while ( getchar() != '\n'); {
		int n;
		printf("Press so luong sinh vien: ");
		scanf("%d", &n);
		char names[n][31];
		nhap(names, n);
		xuat(names, n);
		sapxep(names, n);
	}
	return 0;
}
