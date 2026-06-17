#include <stdio.h>

// Write a C program to implement this Python program, using scanf.

int main() {
    char line[1001];
    printf("Enter line\n");
    
    int i;
    for (i = 0; i < 1000 && scanf("%c", &line[i]) == 1 && line[i] != '\n'; i++)
    ;

    line[i] = '\0';

    printf("Line: %s", line);
}