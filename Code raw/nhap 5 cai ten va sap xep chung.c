#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char names[5][100], temp[100];
    int i, j;
    for(i = 0; i < 5; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = 0;
    }
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcasecmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("\nOUTPUT:\n");
    for(i = 0; i < 5; i++) {
        if (i<4) {
            printf("%s ", names[i]);
        }
        else if (i=4) {
            printf("%s", names[i]);
        }
    }
    return 0;
}


