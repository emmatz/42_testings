/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:52:53 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 13:00:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
#include <stdio.h>
int main()
{
	char *test[] = {"a", ".", "z", "v", "A", "Z", "1", " ", "2", "$"};
	printf("Returns:\n" \
	"  Zero (0)\t\tIf the parameter isn't an alphabet.\n" \
	"  Non-zero number\tIf the parameter is an alphabet.\n\n");
	for (int i = 0; i < (int)sizeof(test)/(int)sizeof(test[0]) ; i++)
		printf("Char: %s <==> Returns: %d\n", test[i], ft_isalpha(test[i][0]) );
}
*/
