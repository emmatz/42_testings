/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:57:40 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 16:03:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}

/*
#include <stdio.h>
int main () 
{
	char *ss[] = {"hello", "second. test", "Xsip", "No done", "NFRT"};
	char c[] = {'l', 'A', 'p', ' ', 'F'};

	printf("Refer to first occurence of a character from a given string\n" \
	"Returns:\n" \
	"  A pointer to the first occurrence of the character\n" \
	"  NULL if the character is not found\n\n");
	for (int i=0; i < (int)sizeof(ss) / (int)sizeof(ss[0]); i++)
		printf("Str: %s\t<==> Looking for <%c> <==> Result: %s\n",
		ss[i], c[i], ft_strchr(ss[i],c[i]));
}
*/
