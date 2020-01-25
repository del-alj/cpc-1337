/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   The_Brothers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:21:33 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/23 13:49:44 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include<string>

using namespace std;

int	main ()
{
	string str[4];
	cin >> str[0] >> str[1];
	cin >> str[2] >> str[3];
	if ((str[1].compare(str[3])) == 0)
		cout << "ARE Brothers\n";
	else
		cout << "NOT\n";
	return (0);
}
