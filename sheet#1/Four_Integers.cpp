/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Four_Integers.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:42:44 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/22 17:55:12 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <valarray>

using namespace std;

int	main()
{

	valarray <long long> var (4);
	cin >> var[0] >> var[1] >> var[2] >> var[3];
	var[0] = var[0] * var[1] * var[2] * var[3];
	cout << var[0];

	return (0);
}

