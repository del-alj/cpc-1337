/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mol_djaj.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:29:24 by del-alj           #+#    #+#             */
/*   Updated: 2019/11/15 16:36:48 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

using namespace std;

int		main()
{
	int		imp;
	int		nb;
	int		nb_ret;
	int		n;

	imp = 1;
	nb_ret = 0;
	nb = 0;
	cin >> n;
	if (n > 2)
	{
		while (nb < n)
		{
			nb = nb + imp - 1;
			imp = imp + 1;
			if (nb == n - 1)
				nb++;
			nb_ret++;
		}
		cout << nb_ret << "\n";
	}
	else
		cout << n << "\n";
	return (0);
}
