/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_formatf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoon <gyoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:20:54 by gyoon             #+#    #+#             */
/*   Updated: 2022/12/17 00:13:32 by gyoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	get_skip_digit(const char *str)
{
	int	len;

	len = 0;
	while (ft_isdigit(str[len]))
		len++;
	return (len);
}

t_format	get_formatf(const char *fmt)
{
	t_format	format;

	format = init_format();
	if (ft_ispercent(fmt[format.len]))
	{
		while (ft_isflag(fmt[++format.len]))
			format.flag = update_flag(format.flag, fmt[format.len]);
		format.width = ft_atoi(fmt + format.len);
		format.len += get_skip_digit(fmt + format.len);
		if (ft_isdot(fmt[format.len]))
		{
			format.precision = ft_atoi(fmt + ++format.len);
			format.len += get_skip_digit(fmt + format.len);
		}
		else
			format.precision = -1;
		format.specifier = fmt[format.len++];
	}
	else
		while (fmt[format.len] && !ft_ispercent(fmt[format.len]))
			format.len++;
	return (format);
}
