/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarius- <sdarius-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:24:29 by sdarius-          #+#    #+#             */
/*   Updated: 2025/07/07 17:44:03 by sdarius-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c);
{
	char ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			return (s);
		s++;
	}
	if (*s == ch)
		return (s);
	return (NULL);
}