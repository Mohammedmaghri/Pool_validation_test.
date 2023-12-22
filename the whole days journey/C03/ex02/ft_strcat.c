/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:44:41 by mmaghri           #+#    #+#             */
/*   Updated: 2023/08/26 19:58:36 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i	;
	int	j	;

	i = 0 ;
	j = 0 ;
	while (dest[i] != '\0')
	{
		i++ ;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++ ;
		j++ ;
	}
	dest[i] = '\0';
	return (dest);
}