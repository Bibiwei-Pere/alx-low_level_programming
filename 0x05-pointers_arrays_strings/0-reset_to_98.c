#include <stdio.h>
#include "main.h"
/**
  * reset_to_98 - updates pointer
  * Return: 0
  */
void reset_to_98(int *n)
{
	*n = 98;
}
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
