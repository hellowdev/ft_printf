#include "ft_printf.h"
#include <stdio.h>
int 	len(long n)
{
    int i = 0;
    if (n == 0)
        return 1;
    while (n != 0)
   {
    // printf("%ld\n", n);
      n = n / 16;
      i++;
   }
   
	return i;
}

int    ft_padress(void *c)
{
    long p = (long)c;
    int t = len(p);
    // printf("%d\n", t);

    if (t == 9 || c == NULL)
        t += write(1, "0x", 2);
    
    else if (p >= 0 && p <= 9)
        ft_putchar(p + '0');

   else if (p > 15)
   {
    ft_padress((void*)(p / 16));
    ft_padress((void*)(p % 16));
   }
   else if ((p % 16 >= 10) && (p % 16 <= 15))
          ft_putchar(p + 87);
    
    return t;
}
// int main ()
// {
// 	int v;
//     int l;
//     int t;
// 	l = ft_padress(&v);
//      printf("\n%d\n", l);
// 	t = printf("%p", &v);
//     printf("\n%d", t);

// }