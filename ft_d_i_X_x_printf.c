/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i_X_x_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshera <sshera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 09:05:28 by sshera            #+#    #+#             */
/*   Updated: 2021/10/26 20:02:05 by sshera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_d_i_printf(int number)
{
	int		count;
	char	*p;

	p = ft_itoadec(number);
	count = ft_putstr(p);
	free(p);
	return (count);
}

int	ft_x_printf(unsigned int number)
{
	int		count;
	char	*p;

	p = ft_itoahex(number, 'x');
	count = ft_putstr(p);
	free(p);
	return (count);
}

int	ft_bx_printf(unsigned int number)
{
	int		count;
	char	*p;

	p = ft_itoahex(number, 'X');
	count = ft_putstr(p);
	free(p);
	return (count);
}

int	ft_p_printf(unsigned long long int ptr)
{
	int		count;
	char	*p;

	ft_putstr("0x");
	p = ft_itoa_p(ptr);
	count = ft_putstr(p);
	free(p);
	return (count + 2);
}

int	ft_u_printf(unsigned int n)
{
	int		count;
	char	*p;

	p = ft_itoau(n);
	count = ft_putstr(p);
	free(p);
	return (count);
}
