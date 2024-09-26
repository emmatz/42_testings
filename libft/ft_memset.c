/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:04:58 by marvin            #+#    #+#             */
/*   Updated: 2024/09/26 16:54:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = (char)c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
int main()
{
	char	s[][50] = {"Welcome to the Jungle", "test two", "Another test, done",
	"Manolete", "Num", "Find the errors", "seventh"};
	int	a[] = {4, 5, 9, 2, 1, 3, 60};
	char	c[] = {'X', '#', '$', '@', 'P', '0', '%'};

	printf("%-25s %-10s %-10s %-60s\n", "Original STR", "Char", "No",
	"Modified STR");
	printf("-------------------------------------------------------------\n");
	for (int i = 0; i < (int)sizeof(a) / (int)sizeof(a[0]); i++)
	{
		printf("%-25s ", s[i]);
		//printf("Original STR: %s", s[i]);
		//ft_memset(s[i], c[i], a[i]);
		//printf("\t<==> Char: %c\t<==> Result: %-25s\n", c[i],
		//(char *)ft_memset(s[i], c[i], a[i]));
		//printf("%-25s %-10c %-60s\n", s[i], c[i],
		//(char *)ft_memset(s[i], c[i], a[i]));
		printf("%-10c %-10d %-60s\n", c[i], a[i],
		(char *)ft_memset(s[i], c[i], a[i]));
	}
	return (0);
}
*/
