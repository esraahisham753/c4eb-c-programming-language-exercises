#include <stdio.h>

// Write a C program to implement this Python program, using scanf.

int main() {
    char line[1001];
    printf("Enter line\n");
    
    int i;
    for (i = 0; scanf("%c", &line[i]) == 1 && i < 1000; i++)
    ;

    line[i] = '\0';

    printf("Line: %s", line);
}