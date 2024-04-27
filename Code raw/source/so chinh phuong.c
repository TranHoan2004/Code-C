#include <stdio.h>
#include <math.h>

int main(){
    int n,i;
    float x,y;
    printf ("nhap n:");
    scanf ("%d",&n);
    printf ("Cac so can tim la: %d \t ",i);
    for (i=1;i<=n;i++)
    {
        x=sqrt(i);
        y=(int)x;
        if (x==y) printf ("%d \t",i);    
    }    
}
