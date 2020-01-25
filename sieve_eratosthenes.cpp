/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sieve_eratosthenes.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 16:13:45 by del-alj           #+#    #+#             */
/*   Updated: 2020/01/17 17:02:24 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
using namespace std; 

void	sieve_of_eratosthenes(int n)
{
	bool	prime[n + 1];

	memset(prime, true, sizeof(prime));
	for (int p=2; p*p<=n; p++)
		if (prime[p] == true)
			for (int i=p*p; i<=n; i += p)
				prime[i] = false;
	for (int p=2; p<=n; p++)
		if (prime[p])
			cout << p<< " ";
}

int main() 
{ 
	int n = 888; 
	cout << n << endl; 
	sieve_of_eratosthenes(n); 
	return 0; 
} 
