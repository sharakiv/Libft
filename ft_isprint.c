/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharaki <sharaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:27:50 by sharaki           #+#    #+#             */
/*   Updated: 2024/10/24 16:56:59 by sharaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_isprint('a'));
// 	printf("%d", ft_isprint('0'));
// 	printf("%d", ft_isprint('&'));
// 	printf("%d", ft_isprint(129));
// 	printf("%d", ft_isprint('\0'));
// 	return (0);
// }
