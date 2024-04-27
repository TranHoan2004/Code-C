#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdio.h>
#include <string.h>

void removestring(char o[], int k, int *n){

    int i;
    for(i=k; i<*n; i++){
        o[i]=o[i+1];
    }
    (*n)--;
}
int main(void){
    char o[1000];
    int i, j, len, check=0; 
    char lastD;
    char *lf;
    fgets(o, sizeof(o), stdin);
    if ((lf = strchr(o, '\n')) != NULL) *lf = '\0';
    len = strlen(o);
    for(i=0;i<len;i++){
        check=0;
        for(j=len-1;j>i;j--){
            if(o[i]==o[j]) {
                check = 1;
                removestring(o, j, &len); 
            }
        }
        if(check==1){
            removestring(o, i, &len);
            i--;
        } else {
            printf("%c", o[i]);
        }
    }
}
