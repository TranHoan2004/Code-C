#include <stdio.h>

int main()
{
    char c[100];    
    int count=0;
    printf("Press: ");
    fgets(c, sizeof(c), stdin);
    for (int i=0; i<100; i++) {
        if((c[i] != ' ') && (i == 0 || c[i-1] == ' ')) {
            count++;
        }        
    }
    printf("%d", count);
	return 0;
}
