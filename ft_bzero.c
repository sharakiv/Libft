/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharaki <sharaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 03:30:22 by sharaki           #+#    #+#             */
/*   Updated: 2024/10/26 04:29:42 by sharaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}

// int	main(void)
// {
// 	// テスト1: 文字列での比較
// 	char str1[] = "Hello, World!";
// 	char str2[] = "Hello, World!";

// 	printf("Test 1 - Before:\n");
// 	printf("str1 (ft_bzero): %s\n", str1);
// 	printf("str2 (bzero): %s\n\n", str2);

// 	ft_bzero(str1, 5); // "Hello"の部分をクリア
// 	bzero(str2, 5);    // 同様に"Hello"の部分をクリア

// 	printf("Test 1 - After (5 bytes zeroed):\n");
// 	printf("str1 (ft_bzero): %s\n", str1);
// 	printf("str2 (bzero): %s\n\n", str2);

// 	// テスト2: バイト列での比較
// 	unsigned char bytes1[] = {1, 2, 3, 4, 5};
// 	unsigned char bytes2[] = {1, 2, 3, 4, 5};

// 	printf("Test 2 - Before:\n");
// 	printf("bytes1 (ft_bzero):");
// 	for (int i = 0; i < 5; i++)
// 		printf(" %d", bytes1[i]);
// 	printf("\nbytes2 (bzero):");
// 	for (int i = 0; i < 5; i++)
// 		printf(" %d", bytes2[i]);
// 	printf("\n\n");

// 	ft_bzero(bytes1, 3); // 最初の3バイトをクリア
// 	bzero(bytes2, 3);    // 同様に3バイトをクリア

// 	printf("Test 2 - After (3 bytes zeroed):\n");
// 	printf("bytes1 (ft_bzero):");
// 	for (int i = 0; i < 5; i++)
// 		printf(" %d", bytes1[i]);
// 	printf("\nbytes2 (bzero):");
// 	for (int i = 0; i < 5; i++)
// 		printf(" %d", bytes2[i]);
// 	printf("\n");

// 	return (0);
// }