/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Age_in_Days.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:27:24 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/22 20:38:08 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main()
{
	long long age, year, month, day;

	cin >> age;
	year = age / 365;
	cout << year << " years\n";
	age = age % 365;
	month = age / 30;
	cout << month << " months\n";
	day = age % 30;
	cout << day << " days\n";
	return (0);
}
