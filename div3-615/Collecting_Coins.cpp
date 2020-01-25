#include <iostream>

using namespace std;

int	main()
{
	int t, a, b, c, n, m, s;

	cin >> t;
	while (t > 0)
	{
		cin >> a >> b >> c >> n;
		s = (a+b+c+n);
		m = max(a, max(b, c));
		(s % 3 == 0 && m <= s/3) ? cout << "Yes\n" : cout << "No\n";
		t--;
	}
	return (0);
}
