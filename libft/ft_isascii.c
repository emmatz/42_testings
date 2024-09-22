/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 04:15:25 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 13:01:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
/*
#include <stdio.h>
int main()
{
	int x[] = {-1, 0, 5, 32, 42, 145, 96, 55};
	printf("Returns:\n" \
	"  non-zero value (true)\tIf the input character fits into the\
	ASCII character set.\n" \
	"  0 (false)\t\tOtherwise.\n\n");
	for (int i = 0; i < (int)sizeof(x) / (int)sizeof(x[0]); i++)
		printf("Char: %c\t<==> Value: %d\t<==> Returns: %d\n", x[i],
		x[i], ft_isascii(x[i]));
}
*/
