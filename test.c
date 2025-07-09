#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int	main(void)
{
	char	str[100] = "Learningisfun";

	char *first, *second;
	first = str;
	second = str;
	printf("Original string :%s\n ", str);
	// when overlap happens then it just ignore it
	ft_memcpy(first + 8, first, 10);
	printf("memcpy overlap : %s\n ", str);
	// when overlap it start from first position
	ft_memmove(second + 8, first, 10);
	printf("memmove overlap : %s\n ", str);
	return (0);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dsttmp;
	unsigned char	*srctmp;

	if (dst == src && dst == NULL)
		return (dst);
	dsttmp = (unsigned char *)dst;
	srctmp = (unsigned char *)src;
	while (n && *dsttmp)
	{
		*dsttmp = *srctmp;
		dsttmp++;
		srctmp++;
		n--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dsttmp;
	char	*srctmp;
	int		i;

	i = 0;
	if (dst == src && dst == NULL)
		return (NULL);
	dsttmp = (char *)dst;
	srctmp = (char *)src;
	if (dsttmp > srctmp)
	{
		while (len-- > 0)
			dsttmp[len] = srctmp[len];
	}
	else
	{
		while (i++ < len)
			dsttmp[i] = srctmp[i];
	}
	return (dst);
}

// void	*ft_memset(void *p, int c, size_t n)
// {
// 	unsigned char *ptr;
// 	*ptr = (unsigned char)p;
// 	int i = 0;
// 	while (i < n)
// 	{
// 		ptr[i] = c;
// 		i++;
// 	}
// 	return (ptr);
// }
// void	*ft_memset(void *b, int c, size_t n)
// {
// 	unsigned char *ptr;
// 	ptr = (unsigned char *)b;
// 	while (n)
// 	{
// 		*ptr = (unsigned char)c;
// 		n--;
//         ptr++;
// 	}
// 	return (b);
// }
// int main()
// {
//     char str[50] = "GeeksForGeeks is for programming geeks.";
//     printf("\nBefore memset(): %s\n", str);

//     // Fill 8 characters starting from str[13] with '.'
//    ft_memset(str + 13, '.', 8*sizeof(char));

//     printf("After memset():  %s", str);
//     return (0);
// }