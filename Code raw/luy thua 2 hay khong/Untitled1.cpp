#include <stdio.h>

int main()
{
    int n;
    printf("Press the number: ");
    scanf("%d", &n);
    if (n<1) printf("No");
    else {
        while (n>1){
            if (n%2!=0){
                printf("No");
                return 0;
            }
            n/=2;
        }
        printf("Yes");
    }
}
