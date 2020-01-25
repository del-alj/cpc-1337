/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Welcome_for_you_with_Condition.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:52:03 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/23 14:56:17 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main()
{
	long long s,b;
	
	cin >> s >> b;
	if (s >= b)
		cout << "Yes\n";
	else
		cout << "No\n";
	return (0);
}
