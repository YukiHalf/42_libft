/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarius- <sdarius-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:22:41 by sdarius-          #+#    #+#             */
/*   Updated: 2025/07/10 16:18:15 by sdarius-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!res)
		return (NULL);
}

static int	word_count(const char *s, char c)
{
	size_t	i;
	size_t	c_words;

	i = 0;
	c_words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			c_words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (c_words);
}
static char word(const char *s, char c , size_t *i)
{


}
char	*fill_word(void)
{
}