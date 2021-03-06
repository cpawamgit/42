/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:55:08 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/07 21:55:11 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

int	ft_strequ(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (ft_strlen(s1) != strlen(s2))
		return(0);
	else
		while (s1 != '\0')
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		return (1);
}
