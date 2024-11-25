#include "ft_printf.h"
#include <stdio.h>
int ft_putstr(char *str)
{
    
    int i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
    
}