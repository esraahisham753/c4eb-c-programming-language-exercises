#include <stdio.h>

int main() {
    char line[1001];
    printf("Enter line\n");
    
    int i;
    for (i = 0; scanf("%c", &line[i]) != 0 && i < 1000; i++)
    ;

    printf("Line: %s", line);
}