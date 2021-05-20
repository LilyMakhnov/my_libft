/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:09:30 by esivre            #+#    #+#             */
/*   Updated: 2021/05/20 12:09:42 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nbr)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	if (*nbr == '+' || *nbr == '-')
		if (*nbr++ == '-')
			sign *= -1;
	while (ft_isdigit(*nbr))
		res = res * 10 + *nbr++ - '0';
	return (sign * res);
}
