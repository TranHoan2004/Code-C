#include <stdio.h>
int main(){
	int m, n, i ,j ,max = 0;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
            if(a[i][j]>max)max=a[i][j];
        }
    }
	printf("so lon nhat trong mang la %d\n", max);
	int tam;
	    for(i = 0; i < m-1; i++){
		    for(j = i + 1; j < m; j++){
			    if(a[1][i] > a[1][j]){
				tam = a[1][i];
				a[1][i] = a[1][j];
				a[1][j] = tam;
			    }
	    	}
	    }
	printf("sap xep dong 2:\n");
	for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
	return 0;
}
