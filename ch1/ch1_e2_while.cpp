#include <iostream>

int main()
{
/*
Compute and write sum of the 1 to 100
*/
	int sum = 0, val = 1;
	while (val <= 100)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 100 inclusive is "
		  << sum << std::endl;
	return 0;
}
