/*
Exercise RS-9: Write a C function to implement this Python code:

def mymult(a,b):
    c = a * b
    return c
*/

#include <stdio.h>

int main() {
    int mymult();
    int retval;

    retval = mymult(6,7);
    printf("Answer: %d\n",retval);
}

int mymult(a, b)
int a, b;
{
    return a * b;
}