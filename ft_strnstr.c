/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarius- <sdarius-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:52:35 by sdarius-          #+#    #+#             */
/*   Updated: 2025/07/09 20:48:37 by sdarius-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnst(const char *haystack, const char *needle, size_t len)
{
	int			size_needle;
	const char	*tmp;
	int			i;

	size_needle = ft_strlen(needle);
	tmp = needle;
	if (*needle == NULL)
		return (haystack);
	while (*haystack && len)
	{
		i = 0;
		tmp = needle;
		while (*haystack == *tmp && len)
		{
			haystack++;
			tmp++;
			i++;
			len--;
		}
		if (i == size_needle)
			return (haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
