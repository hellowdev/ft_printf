#include "ft_printf.h"
#include <stdio.h>

int checker(char *form, va_list p)
{
    int i = 0;
    int o = 0;
    if (form[i] == '%' && form[i + 1] == 'c')
            o += ft_putchar(va_arg(p, int));
    else if (form[i] == '%' && form[i + 1] == 's')
        o += ft_putstr(va_arg(p, char *));
    else if (form[i] == '%' && (form[i + 1] == 'd' || form[i + 1] == 'i'))
        o += ft_putnbr(va_arg(p, int));
    else if (form[i] == '%' && form[i + 1] == 'u')
        o += ft_undecimal(va_arg(p, unsigned int));
    // else if (form[i] == '%' && form[i + 1] == 'p')
    //     o += ft_padress(va_arg(p, int));
    else if (form[i] == '%')
        o += write(1, &form[i + 1], 1);
    else
        o += write(1, &form[i], 1);

    return o;
    
}

int ft_printf(char * format, ...)
{
    int i = 0;
    int b = 0;
    va_list p;
    va_start(p, format);
 
    while (format[i])   
    {
       b += checker(&format[i], p);
        if (format[i] == '%')
            i++;
        i++;
    }
   return (b);
}   
    
int main ()
{

    // char  k[] = "hello";
    // int f = 562;
int n = ft_printf("%u", 4294967295);
      ft_printf("\n%d", n);

}