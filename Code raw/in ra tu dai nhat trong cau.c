#include <stdio.h>
#include <string.h>
int main() {
    char str[100], word[20], max[20];
    int i = 0, j = 0, max_len = 0, len = 0;
    fgets(str, 100, stdin);

    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            word[j] = str[i];
            j++;
            len++;
        } else {
            word[j] = '\0';
            if(len > max_len) {
                max_len = len;
                strcpy(max, word);
            }
            j = 0;
            len = 0;
        }
        i++;
    }
    printf("\nOUPUT:\n");
    printf("%s", max);
    return 0;
}

