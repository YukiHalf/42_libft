/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarius- <sdarius-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:43:14 by sdarius-          #+#    #+#             */
/*   Updated: 2025/07/07 18:15:21 by sdarius-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{	char *p;
    char ch = (char)c;
	while (*s)
	{
		if (*s == ch)
        *p=s;
		s++;
	}
	if (*s == ch)
		return (s);
        if()
	return (NULL);

}