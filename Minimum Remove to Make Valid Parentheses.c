#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

char *minRemoveToMakeValid(char *s) {
    char *result = (char *)malloc(MAX_LENGTH * sizeof(char));
    int stack[MAX_LENGTH];
    int top = -1;
    int len = strlen(s);
    int i;
    int *remove = (int *)calloc(len, sizeof(int));

    for (i = 0; i < len; i++) {
        if (s[i] == '(') {
            stack[++top] = i;
        } else if (s[i] == ')') {
            if (top >= 0) {
                top--;
            } else {
                remove[i] = 1;
            }
        }
    }

    while (top >= 0) {
        remove[stack[top--]] = 1;
    }

    int j = 0;
    for (i = 0; i < len; i++) {
        if (!remove[i]) {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';

    free(remove);
    return result;
}

int main() {
    char s[MAX_LENGTH];
    printf("Enter a string: ");
    scanf("%[^\n]s", s);
    getchar(); // Consume newline character
    char *result = minRemoveToMakeValid(s);
    printf("Result: %s\n", result);
    free(result);
    return 0;
}
