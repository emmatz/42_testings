/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 04:07:35 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 04:08:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main ()
{
	char *s[] = {"hello", "surpise", "nono", "normal"};
	int a[] = {2, 3, 1, 4};
	char *s2[] = {"He", "sur", "n", "ztrM"};

	printf("It compares only the first (at most) n bytes of s1 and s2\n" \
	"Returns: \n \
	  - 0, if the s1 and s2 are equal\n \
	  - a negative value if s1 is less than s2\n \
	  - a positive value if s1 is greater than s2\n\n");

	for(int i = 0; i < (int)sizeof(a) / (int)sizeof(a[0]); i++)
	{
		printf("STR ORIGINAL: %s\tSTR SEARCH: %s\tvalue: %d",
		s[i], s2[i], ft_strncmp(s[i], s2[i], a[i]));
		if (ft_strncmp(s[i], s2[i], a[i]) == 0)
			printf("\tMATCH!... :)\n");
		else
			printf("\tNOT MATCH... :(\n");
	}
}
*/
