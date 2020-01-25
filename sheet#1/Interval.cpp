/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interval.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:40:28 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/23 18:27:30 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool inRange(double low, double high, double x)
{
	return (low <= x && x <= high);
}

using namespace std;

int	main()
{
	double	nb;
	double r = 0.00, l = 25.00;

	cin >> nb;
	if (nb < 0.00 || nb > 100.00)
		cout << "Fora de intervalo";
	else
	{
		while (l < 101)
			{
				if (inRange(r, l, nb))
					break ;
				r = r + 25;
				l = l + 25;
			}
		cout << "Intervalo ";
		(r != 0) ? cout << "(" : cout << "[";
		cout << r << "," << l << "]" << "\n";
	}
	return (0);
}
