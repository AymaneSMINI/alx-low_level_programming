#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - check the code.
 *@n : int argument 
 * Return: positive value.
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
