#include <iostream>
#include <cmath>
int main()
{
	int n;
	std::cin >> n;
	int sum = 0;
	for (int i = 1; i <= sqrt(n);i++)
	{
		if (n % i == 0)
		{
			sum += i;
			if (i != n / i)
			{
				sum += n / i;
			}
		}
	}
	if (sum - n == n)
	{
		std::cout << "YES"<< std::endl;
	}
	else 
	{
		std::cout << "NO" << std::endl;
	}
}
