/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumfs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoon <gyoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:03:02 by gyoon             #+#    #+#             */
/*   Updated: 2022/12/10 18:34:29 by gyoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnumfs(int c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X')
		return (1);
	else
		return (0);
}
