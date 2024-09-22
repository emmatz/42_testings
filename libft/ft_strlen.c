/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 05:00:51 by marvin            #+#    #+#             */
/*   Updated: 2024/09/22 02:59:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//typedef unsigned long size_t;
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int main() {
	char *texto[] = {"Hola", "hi", "I don't know", "I am  two years old",
	"one", "withoutblanks"};

	printf("Returns a possitive value type size_t\n\n");
	for (int i = 0; i < (int)sizeof(texto) / (int)sizeof(texto[0]); i++)
		printf("Len: %ld\t<==> Str: \"%s\"\n", ft_strlen(texto[i]), texto[i]);
}
*/
