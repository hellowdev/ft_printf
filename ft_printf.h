#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_printf(char * format, ...);
int ft_putnbr(long int nb);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_undecimal(unsigned int n);
int	ft_padress(void *c);

#endif