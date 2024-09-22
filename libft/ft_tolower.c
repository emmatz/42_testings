/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:55:25 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 13:30:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*// return (c >= 'a' && c <= 'z') ? (c - 32) : c;
#include <stdio.h>
int main()
{
	char d[] = {'d', ' ', '/', 'W', 'g', 'a', 'Z', 'A', 'z', ':'};
	
	printf("Returns:\n" \
	"  Lowercase character\tIf is uppercase character.\n" \
	"  The character itself\tIf not uppercase.\n\n");

	for (int i = 0; i < (int)sizeof(d) / (int)sizeof(d[0]); i++)
		printf("Original: %c\t<==> Converted: %c\n", d[i], ft_tolower(d[i]));
}
*/
