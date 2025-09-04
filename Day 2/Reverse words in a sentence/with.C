#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    char *token;
    char *words[100];
    int count = 0;

    token = strtok(str, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }
}

int main() {
    char str[] = "I love programming";
    reverseWords(str);
    return 0;
}
