/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 03:31:41 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 12:59:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') \
	|| (c >= 'A' && c <= 'Z'));
}

/*
#include <stdio.h>
int main()
{
	char x[] = {'1', 'd', ',', ' ', 'W', '\n', '^', '5', '\t'};
	
	printf("Returns:\n" \
	"  1\tif argument is an alphanumeric character.\n" \
	"  0\tif argument is neither an alphabet nor a digit.\n\n");
	for (int i = 0; i < (int)sizeof(x) / (int)sizeof(x[0]); i++)
		printf("Char: %c <==> Returns: %d\n", x[i], ft_isalnum(x[i]));
}
*/
