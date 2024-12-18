/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:50:35 by qtay              #+#    #+#             */
/*   Updated: 2024/10/09 00:55:10 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	char	*buffer;
	int		i;
	int		len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	buffer = ft_calloc((len + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	i = 0;
	while (src[i])
	{
		buffer[i] = src[i];
		i++;
	}
	return (buffer);
}
