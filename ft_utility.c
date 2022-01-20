/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshera <sshera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:35:53 by sshera            #+#    #+#             */
/*   Updated: 2021/10/26 20:00:29 by sshera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoadec(int number)
{
	int		len;
	char	*number2;

	if (number == -2147483648)
		return (ft_strdup("-2147483648"));
	len = len_number(number);
	number2 = (char *)malloc(sizeof(char) * (len + 1));
	if (number2 == NULL)
		return (NULL);
	if (number < 0)
	{
		number = -number;
		number2[0] = '-';
	}
	number2[len--] = '\0';
	while (number / 10 > 0)
	{
		number2[len--] = (number % 10) + '0';
		number /= 10;
	}
	number2[len] = (number % 10) + '0';
	return (number2);
}

void	reverse(char *s)
{
	int	ibegin;
	int	iend;
	int	c;

	ibegin = 0;
	iend = ft_strlen(s);
	if (iend == 1)
		return ;
	while (ibegin < iend)
	{
		c = s[ibegin];
		s[ibegin++] = s[--iend];
		s[iend] = c;
	}
}

char	*ft_itoahex(unsigned int num, char x)
{
	int		i;
	int		tmp;
	char	hex[100];

	i = 0;
	if (num == 0)
		hex[i++] = '0';
	while (num != 0)
	{
		tmp = num % 16;
		if (tmp < 10)
			tmp = tmp + 48;
		else if (x == 'X')
			tmp = tmp + 55;
		else
			tmp = tmp + 87;
		hex[i++] = tmp;
		num = num / 16;
	}
	hex[i] = '\0';
	reverse(hex);
	return (ft_strdup(hex));
}

int	len_number(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoau(unsigned int number)
{
	int		len;
	char	*number2;

	len = len2_number(number);
	number2 = (char *)malloc(sizeof(char) * (len + 1));
	if (number2 == NULL)
		return (NULL);
	number2[len--] = '\0';
	while (number / 10 > 0)
	{
		number2[len--] = (number % 10) + '0';
		number /= 10;
	}
	number2[len] = (number % 10) + '0';
	return (number2);
}
