/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarius- <sdarius-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:52:35 by sdarius-          #+#    #+#             */
/*   Updated: 2025/07/07 18:03:23 by sdarius-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s != '0')
	{
		i++;
		s++;
	}
	return (i);
	return (0);
}

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
