/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:04:40 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 13:00:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>
int	main()
{
	char c[] = {'5', '3', '.', '=', '9'};

	printf("Returns:\n"\
	"  Non-zero integer ( x > 0 )\tArgument is a numeric character.\n" \
	"  Zero (0)\t\t\tArgument is not a numeric character.\n\n");
	
	for (int i = 0; i < (int)sizeof(c) / (int)sizeof(c[0]); i++)
		printf("Digit: %c <==> Returns: %d\n", c[i], ft_isdigit(c[i]));
}
*/
