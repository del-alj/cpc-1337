/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Multiples.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:57:17 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/22 18:01:34 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main()
{
	long long a, b;

	cin >> a >> b;
	if (a % b == 0 || b % a == 0)
		cout << "Multiples\n";
	else 
		cout << "No Multiples\n";

	return (0);
}
