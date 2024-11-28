#include "ft_printf.h"

static int tol(int elen)
{
   int i;
   i = 0;
   if (elen == 0)
      i++;
   if (elen < 0)
      i++;
   while (elen != 0)
   {
      elen = elen / 10;
      i++;
   }
   return (i);
}

int ft_putnbr(long int n)
{
   int count = tol(n);
   
    if (n >= 0 && n <= 9)
    {
        ft_putchar(n + '0');
    }
   if (n > 9)
   {
    ft_putnbr(n / 10);
    ft_putnbr(n % 10);
   }
   
   if (n < 0)
   {
        n *= -1;
        ft_putchar('-');
        ft_putnbr(n);
   }
   return (count);
    
}
