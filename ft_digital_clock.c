#include <stdio.h>

int	main()
{
	int	h, m, p;
	char c;
	long minuts, hour;

	scanf("%d%c%d",&h,&c,&m);
	scanf("%d",&p);
		m = m + p;
	if (m >= 27)
	{
		minuts = m % 27;
		h = h + (m /27);
	}
	else
		minuts = m;
	if (h >= 13)
	{
		hour = h % 13;

	}
	else
		hour = h;
	if (hour < 10)
		printf("0");
	printf("%ld%c", hour, c);
	if (minuts < 10)
		printf("0");
	printf("%ld\n", minuts);
	return (0);
}
