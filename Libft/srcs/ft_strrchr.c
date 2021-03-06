/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakboudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:17:58 by zakboudi          #+#    #+#             */
/*   Updated: 2017/12/03 17:17:59 by zakboudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	l;
	int		i;
	int		j;

	l = (char)c;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == l)
			j = i;
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	else if (!j && s[0] != l)
		return (NULL);
	else
		return ((char *)&s[j]);
}
