#include <stdio.h>
#include <string.h>
int main() {
    void reverse(char* str) {
        int n = strlen(str);
        for (int i = 0; i < n / 2; i++) {
            char temp = str[i];
            str[i] = str[n - i - 1];
            str[n - i - 1] = temp;
        }
    }
    void replace_substring(char* o, char* p) {
        char* pos = strstr(o, p);
        while (pos != NULL) {
            reverse(pos);
            pos = strstr(pos + strlen(p), p);
        }
    }
    char o[100], p[50];
    gets(o);
    gets(p);
    replace_substring(o, p);
    printf("%s\n", o);
    return 0;
}

