/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharaki <sharaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:52:44 by sharaki           #+#    #+#             */
/*   Updated: 2024/10/31 19:37:29 by sharaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	void				*origin_dest;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	origin_dest = dest;
	if (!dest && !src)
		return (NULL);
	if (s < d && s + n > d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (origin_dest);
}

// int	main(void)
// {
// 	// 通常のコピーテスト
// 	char str1[] = "Hello, World!";
// 	char buf1[20] = {0};
// 	ft_memmove(buf1, str1, strlen(str1) + 1);
// 	printf("ft_memmove normal copy: %s\n", buf1);

// 	char str2[] = "Hello, World!";
// 	char buf2[20] = {0};
// 	memmove(buf2, str2, strlen(str2) + 1);
// 	printf("memmove normal copy: %s\n", buf2);

// 	// 重複メモリのテスト
// 	char overlap1[] = "abcdefghijklm";
// 	ft_memmove(overlap1 + 2, overlap1, 5);
// 	printf("ft_memmove overlapping: %s\n", overlap1);

// 	char overlap2[] = "abcdefghijklm";
// 	memmove(overlap2 + 2, overlap2, 5);
// 	printf("memmove overlapping: %s\n", overlap2);

// 	// NULLテスト
// 	printf("ft_memmove NULL test: %p\n", ft_memmove(NULL, NULL, 5));
// 	// memmoveのNULLテストは警告が出るため省略

// 	return (0);
// }