/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   First_digit.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:44:33 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/22 19:00:21 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main()
{
	char nb[4];
	cin >> nb;
	((nb[0] - '0') % 2 == 0) ? cout << "EVEN\n" : cout << "ODD\n";
	return (0);
}