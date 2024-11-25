#include "ft_printf.h"
#include <stdio.h>
int ft_printf(char * format, ...)
{
    int i = 0;
    int b = 0;
    char c;
    va_list p;

    va_start(p, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1] == 'd')
        {
            b += ft_putnbr(va_arg(p, int));
        }
        if (format[i] == '%' && format[i + 1] == 'c')
        {
           c += va_arg(p, int);
           ft_putchar(c);
        }
        else if  (format[i - 1] != '%')
           b += write(1, &format[i],1);
        i++;
    }
    return (b);
    
}
int main ()
{
    char k, t = 'v';
    printf("%c%cfdfdf%", k, t);
    // j = printf("\njjl%dvdd%dd\n", 55, 4);
    // printf("%d\n", j);
}