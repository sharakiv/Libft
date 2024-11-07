/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharaki <sharaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:40:02 by sharaki           #+#    #+#             */
/*   Updated: 2024/10/24 14:31:55 by sharaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_isalpha('A'));
// 	printf("%d", ft_isalpha('b'));
// 	printf("%d", ft_isalpha('1'));
// 	printf("%d", ft_isalpha('8'));
// 	printf("%d", ft_isalpha('!'));
// 	return (0);
// }
