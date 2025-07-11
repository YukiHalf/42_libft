#ifndef LIBFT.H
#define LIBFT.H
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

#endif