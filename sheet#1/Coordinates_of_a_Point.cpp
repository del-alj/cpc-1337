/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Coordinates_of_a_Point.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 18:35:22 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/23 19:07:35 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main()
{
	double x, y;

	cin >> x >> y;
	if (x == 0 && y == 0)
		cout << "Origem";
	else if (x == 0 && y != 0)
		cout << "Eixo Y";
	else if (x != 0 && y == 0)
		cout << "Eixo X";
	else if (x >= 0.00 && y >= 0.00)
		cout << "Q1";
	else if (x < 0.00 && y >= 0.00)
		cout << "Q2";
	else if (x >= 0.00 && y < 0.00)
		cout << "Q4";
	else if (x < 0.00 && y < 0.00)
		cout << "Q3";
	return (0);
}
