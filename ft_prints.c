/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmompart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:00:37 by jmompart          #+#    #+#             */
/*   Updated: 2026/01/16 13:00:42 by jmompart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_char(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (write (1, "(null)", 6));
	while (s[count])
	{
		write (1, &s[count], 1);
		count++;
	}
	return (count);
}

int	ft_print_pointer(va_list ap)
{
	int		count;
	void	*ptr;

	count = 0;
	ptr = va_arg(ap, void *);
	if (!ptr)
		count += ft_print_str("(nil)");
	else
	{
		count += ft_print_str("0x");
		count += ft_print_nbr((unsigned long)ptr, 16, 'x');
	}
	return (count);
}

int	ft_print_nbr(long nbr, int b, char id)
{
	int		count;
	char	*base;

	count = 0;
	if (id == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr < 0)
	{
		write (1, "-", 1);
		return (ft_print_nbr(-nbr, b, id) + 1);
	}
	if (nbr < b)
		return (ft_print_char(base[nbr]));
	else
	{
		count = ft_print_nbr((nbr / b), b, id);
		count += ft_print_char(base[nbr % b]);
		return (count);
	}
}
