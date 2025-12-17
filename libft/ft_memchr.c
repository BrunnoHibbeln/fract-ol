/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:58:29 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/05 19:32:46 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*us;
	unsigned char		target;
	size_t				i;

	i = 0;
	target = (unsigned char)c;
	us = (const unsigned char *)s;
	while (i < n)
	{
		if (us[i] == target)
		{
			return ((void *)(us + i));
		}
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
    // Test case 1: Basic search for a character in a string
    char str1[] = "Hello, World!";
    char c1 = 'W';
    size_t n1 = strlen(str1);
    void *result1 = ft_memchr(str1, c1, n1);
    printf("Test 1: Searching for '%c' in \"%s\"\n", c1, str1);
    if (result1)
        printf("Found at position: %ld\n", (char*)result1 - str1);
    else
        printf("Not found\n");

    // Test case 2: Character not in string
    char str2[] = "Hello, World!";
    char c2 = 'Z';
    size_t n2 = strlen(str2);
    void *result2 = ft_memchr(str2, c2, n2);
    printf("\nTest 2: Searching for '%c' in \"%s\"\n", c2, str2);
    if (result2)
        printf("Found at position: %ld\n", (char*)result2 - str2);
    else
        printf("Not found\n");

    // Test case 3: Empty string
    char str3[] = "";
    char c3 = 'A';
    size_t n3 = 0;
    void *result3 = ft_memchr(str3, c3, n3);
    printf("\nTest 3: Searching for '%c' in empty string\n", c3);
    if (result3)
        printf("Found at position: %ld\n", (char*)result3 - str3);
    else
        printf("Not found\n");

    // Test case 5: Search for null character
    char str5[] = "Test\0Hidden";
    char c5 = '\0';
    size_t n5 = 10;
    void *result5 = ft_memchr(str5, c5, n5);
    printf("\nTest 5: Searching for '\\0' in \"%s\"\n", str5);
    if (result5)
        printf("Found at position: %ld\n", (char*)result5 - str5);
    else
        printf("Not found\n");

    return (0);
} */
