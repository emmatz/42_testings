/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:55:25 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 13:26:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*// return (c >= 'a' && c <= 'z') ? (c - 32) : c;
#include <stdio.h>
int main()
{
	char d[] = {'d', ' ', '/', 'W', 'g', 'a', 'Z', 'A', 'z'};
	
	printf("Returns:\n" \
	"  Uppercase character\tIf is lowercase character.\n" \
	"  The character itself\tIf not lowercase.\n\n");

	for (int i = 0; i < (int)sizeof(d) / (int)sizeof(d[0]); i++)
		printf("Original: %c\t<==> Converted: %c\n", d[i], ft_toupper(d[i]));
}
*/
