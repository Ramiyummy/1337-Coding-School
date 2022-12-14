/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:25:42 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/06 07:15:31 by dark             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_str("(null)");
		return (6);
	}
	while (*(s + i) != '\0')
	{
		write(1, (s + i), sizeof(char));
		i++;
	}
	return (i);
}
