/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:54:54 by marvin            #+#    #+#             */
/*   Updated: 2024/09/22 12:31:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The strlcpy() function copies up to size - 1 characters from the NUL-
 * terminated string src to dst, NUL-terminating the result.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && (i + 1) < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
int main()
{
	char *or[] = {"Hello Sr.", "hoy no mas, ech", "no way to copy",
	"super long string", "short string", "1234567890"};
	char ds[10];
	
	for (int i = 0; i < (int)sizeof(or) / (int)sizeof(or[0]); i++)
		printf("Length: %ld\t<==> Dest: %s\t<==> Origen: %s\n",
		ft_strlcpy(ds, or[i], sizeof(ds) ), ds, or[i]);
}
*/
