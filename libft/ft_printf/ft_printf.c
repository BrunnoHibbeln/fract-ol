/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:05:13 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/16 12:51:02 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char specifier, va_list *ap)
{
	int		count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(*ap, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg(*ap, char *));
	else if (specifier == 'p')
		count += ft_print_pointer(va_arg(*ap, unsigned long long));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_print_digit(va_arg(*ap, int));
	else if (specifier == 'u')
		count += ft_print_unsigned(va_arg(*ap, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		count += ft_print_hex(va_arg(*ap, unsigned int), specifier);
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_check_conversion(const char format)
{
	char *symbols;

	symbols = "cspdiuxX%";
	while (*symbols)
	{
		if (format == *symbols)
			return (1);
		symbols++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%' && *++format)
		{
			if (ft_check_conversion(*format))
				count += ft_print_format(*format, &ap);
			else
			{
				count += write(1, "%", 1);
				count += write(1, format, 1);
			}
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
