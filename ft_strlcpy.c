/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarius- <sdarius-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:02:48 by sdarius-          #+#    #+#             */
/*   Updated: 2025/07/06 19:02:50 by sdarius-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	srcsize(char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		i++;
		src++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	unsigned int j;

	j=1;
	i = srcsize(src);
	while (*src != '\0' && j < size )
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	return (i);
}