/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychedmi <ychedmi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:34:23 by ychedmi           #+#    #+#             */
/*   Updated: 2024/12/02 14:55:35 by ychedmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr(long int nb);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_undecimal(unsigned int n);
int	ft_padress(void *c);
int	ft_lowerad(unsigned int c);
int	ft_upperad(unsigned int c);

#endif