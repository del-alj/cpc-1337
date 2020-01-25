/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Move_Zeroes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 07:09:00 by del-alj           #+#    #+#             */
/*   Updated: 2019/10/30 16:51:21 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

using namespace std;

int		main()
{
	int		k;
	int		nb;
	int		j;

	j = 0;
	cin >> k;
	while (k > 0)
	{
		cin >> nb;
		if (nb != 0)
			cout << nb << "\n";
		else
			j++;
		k--;
	}
	while (j > 0)
	{
		cout << "0\n";
		j--;
	}
	return (0);
}
