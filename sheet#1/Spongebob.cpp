/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spongebob.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:15:18 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/23 12:45:52 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
using namespace std;

int	main()
{
	char	nb[2][100];
	long long a,b;

	cin >> nb[0] >> nb[1];
	a = strlen(nb[0]);
	b = strlen(nb[1]);
	a = nb[0][a - 1] - '0';
	b = nb[1][b - 1] - '0';
	cout << (a + b) << "\n";
	return (0);
}
