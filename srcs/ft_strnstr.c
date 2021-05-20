/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:45:02 by esivre            #+#    #+#             */
/*   Updated: 2021/05/20 16:46:48 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ret;
	size_t	s_little;

	s_little = ft_strlen(little);
	if (s_little <= len)
		len -= (s_little - 1);
	ret = (char *)big;
	if (!*little)
		return (ret);
	while (*ret && len--)
	{
		if (!ft_strncmp(ret, little, s_little))
			return (ret);
		ret++;
	}
	return (0);
}
