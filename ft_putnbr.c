#include "ft_printf.h"

int ft_putnbr(int nb)
{
   long int n = nb;
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
   
   return (n);
    
}
// int main()
// {
//     printf("%d", ft_putnbr(50));
// }