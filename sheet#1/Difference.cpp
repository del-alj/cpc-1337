/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Difference.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:32:48 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/22 17:53:54 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <valarray>

using namespace std;

int	main ()
{
	valarray<long long> varr (4);

	cin >> varr[0] >> varr[1] >> varr[2] >> varr[3];
	varr[0] = varr[0] * varr[1];
	varr[1] = varr[2] * varr[3];
	varr[0] = varr[0] - varr[1];
	cout << "Difference = " << varr[0] << endl;
	return (0);
}

