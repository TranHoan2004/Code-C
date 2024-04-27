#include <stdio.h>
#include <string.h>
int main() {
    char str[100], word[20], max[20], min[20];
    int i = 0, j = 0, max_len = 0, min_len = 100, len = 0;
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
            if(len < min_len) {
                min_len = len;
                strcpy(min, word);
            }
            j = 0;
            len = 0;
        }
        i++;
    }
    printf("The longest word: %s\n", max);
    printf("The shortest word: %s\n", min);
    return 0;
}



