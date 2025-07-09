/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarius- <sdarius-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:16:48 by sdarius-          #+#    #+#             */
/*   Updated: 2025/07/06 19:16:49 by sdarius-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strleng(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sized;
	unsigned int	sizes;
	unsigned int	i;
	int				j;

	i = 0;
	sized = strleng(dest);
	sizes = strleng(src);
	j = sized;
	while (src[i] != '\0' && i < size && sizes < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (sized + sizes);
}