#include "ft_printf.h"

int 	len(long n)
{
    int i = 0;
    while (n != 0)
   {
      n = n / 16;
      i++;
   }
	return i;
}

int    ft_padress(void *c)
{
    int i;

    i = 0;
    long p = (long)c;
    int t = len(p);

    if (t == 12)
      write(1, "0x", 2);
    if (p >= 0 && p <= 9)
    {
        ft_putchar(p + '0');
    }
   else if (p > 15)
   {
    ft_padress((void*)(p / 16));
    ft_padress((void*)(p % 16));
   }
   else if ((p % 16 >= 10) && (p % 16 <= 15))
          ft_putchar(p + 87);
    
    return i;
}
int main ()
{
	int v;
	ft_padress(&v);
	// printf("%p", &v);
}