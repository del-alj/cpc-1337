/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   team_formation.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 17:21:24 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/20 19:11:55 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

using namespace std;

int	main()
{
	int n, i, k = 1, c = 0;
	int	indx;

	cin >> n;
	int list[n];
	i = 1;
	while (i <= n)
	{
		cin >> indx;
		list[i] = indx;
		if (i == indx)
			c++;
		i++;
	}
	i = 1;
	indx = list[1];
	if (n >= 3)
	{
		while (n >= k)
		{
			i = 0;
			indx = k;
			while (i < 4)
			{
				indx = list[indx];
				i++;
			}
			if (c == 0 && indx == list[k])
			{
				cout << "YES\n";
				return (0);
			}
			k++;
		}
	}
		cout << "NO\n";
	return (0);
}
