#include <iostream>
#include <cmath>
int  main()
{
	int n;
	std::cin >> n;
	int dem1 = 0;
	for (int i = 1; i <= sqrt(n);i++)
	{
		if (n % i == 0)
		{
			dem1++;
			if (i != n / i)
				dem1++;
		}
	}
	std::cout << dem1;
}
