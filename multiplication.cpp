/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiplication.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:27:02 by del-alj           #+#    #+#             */
/*   Updated: 2019/11/15 19:15:04 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main()
{
	int		k;
	int		nb;
	int		j;
	int indx = 2;
	int m = 2;
	j = 0;
	cin >> k;
	while (k > 0)
	{
		k--;
		cin >> nb;
		if (ft_is_prime(nb) == 1)
			cout << nb - 1 << "\n";
		else
		{
			while (m * indx <= nb/ 2)
			{
				if (m * indx == nb)		
				{
					cout << m + indx - 2 << "\n";
					break;
				}	
				indx++;
				if (m * indx > nb/2)
				{
					indx = 2;
					m++;
				}
			}
		}
	}
	return (0);
}
