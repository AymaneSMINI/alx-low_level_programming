#include "main.h"
void print_triangle(int size)
{
        int i;
        int j;
        int k;

        if (size <= 0)
                _putchar('\n');
        for (i = 1; i <= size; i++)
        {
                for (j = 1; j <= size-i ; j++)
                {
                        _putchar(' ');
                }
                for (k = size-i; k < size; k++)
                {
                        _putchar('#');
                }
                _putchar('\n');
        }
}
