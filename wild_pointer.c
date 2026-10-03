#include <stdio.h>

int main()
{
    int number = 50;
    int *ptr;

    /* Initialize the pointer before using it */
    ptr = &number;

    printf("Value of number = %d\n", *ptr);

    return 0;
}
