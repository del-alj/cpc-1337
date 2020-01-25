/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array_in_reverse.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:52:01 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/22 14:06:39 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main()
{
	int	r, i;
	cin >> r;

	int	tab[r];
	i = r;
	while (i > 0)
	{
		i--;
		cin >> tab[i];	
	}
	while (r > i)
	{
		cout << tab[i] << "\n";
		i++;
	}
	return (0);
}
