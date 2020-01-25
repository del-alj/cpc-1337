/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 16:22:04 by del-alj           #+#    #+#             */
/*   Updated: 2019/11/03 17:49:27 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long long	ft_fibo(long long n)
{
	unsigned long long k, a, b, r;

	if (n == 0)
		return (0);
	else 
	{
		a = 0;
		b = 1;
		k = 0;
		while (n > k)
		{
			r = b;
			b = (a + b) % 1000000007;
			a = r;
			k++;
		}
	}
	return ((b % 1000000007));
}
int	main()
{
	long	n,m,f;
	long	a, b, r;
	a = 1,
	b = 2;
	scanf("%ld%ld", &n, &m);
	f = ft_fibo(n);
	printf("%ld\n", f);
	while (n < m)
	{
		n++;
		f = f % 1000000007 + ft_fibo(n) % 1000000007;
		//n++;
	}
	return (0);
}
