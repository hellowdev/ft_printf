#include "ft_printf.h"

static int tol(unsigned int elen)
{
   int i;
   i = 0;
   if (elen == 0)
      i++;
   while (elen != 0)
   {
      elen = elen / 10;
      i++;
   }
   return (i);
}
int ft_undecimal(unsigned int n)
{
	int i;
	i = tol(n);
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	if (n > 9)
	{
	ft_undecimal(n / 10);
	ft_undecimal(n % 10);
	}
	return (i);
}

