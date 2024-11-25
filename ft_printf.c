#include "ft_printf.h"
#include <stdio.h>



int ft_printf(char * format, ...)
{
    int i = 0;
    int b = 0;
    va_list p;
    
    va_start(p, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1] == 'd')
        {
            b += ft_putnbr(va_arg(p, int));
        }
        else if (format[i] == '%' && format[i + 1] == 's')
        {
            b += ft_putstr(va_arg(p, char *));
            i++;
        }
        else if (format[i] == '%' && format[i + 1] == 'c')
        {
            b += ft_putchar(va_arg(p, int));
            i++;
        }
        else if  (format[i] != '%')
           b += write(1, &format[i], 1);
        i++;
    }
    return (b);
    
}
int main ()
{
    char k[] = "hello";
    ft_printf("ssw%morld", k);
    // j = printf("\njjl%dvdd%dd\n", 55, 4);
    // printf("%d\n", j);
}