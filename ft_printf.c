/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmompart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:27:37 by jmompart          #+#    #+#             */
/*   Updated: 2026/01/16 12:27:46 by jmompart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_format(char id, va_list ap)
{
	int	count;

	count = 0;
	if (id == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (id == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (id == 'd' || id == 'i')
		count += ft_print_nbr((long)va_arg(ap, int), 10, id);
	else if (id == 'u')
		count += ft_print_nbr((long)va_arg(ap, unsigned int), 10, id);
	else if (id == 'x' || id == 'X')
		count += ft_print_nbr((long)va_arg(ap, unsigned int), 16, id);
	else if (id == 'p')
		count += ft_print_pointer(ap);
	else if (id == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(char const *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	if (!format)
		return (0);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_print_format(*(format), ap);
		}
		else
			count += ft_print_char(*format);
		format++;
	}
	va_end(ap);
	return (count);
}
