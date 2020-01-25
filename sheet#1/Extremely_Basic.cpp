/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Extremely_Basic.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:09:29 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/22 17:32:35 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <valarray>

using namespace std;

int	main ()
{
	valarray<int> varr (2);
	cin >> varr[0] >> varr[1];

	cout << "sum = " << varr.sum() << endl;
	return (0);
}

