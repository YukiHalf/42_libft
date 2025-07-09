/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarius- <sdarius-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 20:43:43 by sdarius-          #+#    #+#             */
/*   Updated: 2025/07/09 20:47:41 by sdarius-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i++ < n)
	{
		if ((unsigned char *)s1 != (unsigned char *)s2)
			return ((unsigned char *)s1 - (unsigned char *)s2) ;
        s1++;
		s2++;
	}
    return 0;
}
