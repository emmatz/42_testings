/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 04:39:30 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 13:02:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

/*
#include <stdio.h>
int main() {
	printf("Returns:\n" \
	"  Non-zero integer (True)\tIf it is a printable character.\n" \
	"  0 (False)\t\t\tIf it is not a printable character.\n\n");
	for (int i = -2; i <= 130; i++)
		printf("Char: %c\t<==> Value: %d\t<==> Returns: %d\n",
		i, i, ft_isprint(i));
}
*/
