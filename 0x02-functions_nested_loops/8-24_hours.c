#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
    char i, j, k, l, m;
    m = '9';

    for (i = '0'; i <= '2'; i++)
    {
        if (i == '2')
            m = '3';
        for (j = '0'; j <= m; j++)
        {
            for (k = '0'; k <= '5'; k++)
            {
                for (l = '0'; l <= '9'; l++)
                {
                    _putchar(i);
                    _putchar(j);
                    _putchar(':');
                    _putchar(k);
                    _putchar(l);
                    _putchar('\n');
                }
            }
        }
    }
}
