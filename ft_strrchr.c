/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarius- <sdarius-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:43:14 by sdarius-          #+#    #+#             */
/*   Updated: 2025/07/09 20:32:18 by sdarius-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	ch;

	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			*p = s;
		s++;
	}
	if (*s == ch)
		return (s);
	return (NULL);
}
