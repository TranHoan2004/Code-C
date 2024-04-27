#include <stdio.h>
#include <string.h>
int main() {
    int sum=0, sub=1, i;
    int n;
    scanf("%d", &n);
    while (n!=0) {
        int k=n%10;
        sum+=k;
        sub*=k;
        n=n/10;
    }
    if (sum==sub) {
        printf("Yes");
    }
    else printf("No");
    return 0;
}
