#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _abs(int n)
{
    if (n >= 0) 
    {   
        return (n);
    }
    else
    {   
        return (-n);
    }
}
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
