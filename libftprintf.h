/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmompart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:48:52 by jmompart          #+#    #+#             */
/*   Updated: 2026/01/14 14:48:59 by jmompart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_print_format(char id, va_list ap);
int	ft_print_pointer(va_list ap);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_nbr(long nbr, int b, char id);

#endif
