#include <iostream>
#include "stdio.h"

using namespace std;


long long	ft_aymanacci(long long n)
{
	unsigned long long k, a, b, r;

	if (n == 0)
		return (0);
	if (n == 1)
		return (42);
	if (n == 2)
		return (1337);
	else 
	{
		a = 42;
		b = 1337;
		k = 2;
		while (n > k)
		{
			r = b;
			b = (a + b) % 1000000007;
			a = r;
			k++;
		}
	}
		return ((b % 1000000007));
}

int		main()
{
	unsigned long long n;
	cin >> n;
	cout << ft_aymanacci(n) % 1000000007 << "\n";
	return (0);
}
