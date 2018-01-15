#include <iostream>

int main()
{
	//input 2 numbers, v1, v2
	std::cout << "Enter two numbers: " << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	//identify upper and lower
	int upper, lower;
	if (v1 >= v2)
	{
		upper = v1;
		lower = v2;		
	} else
	{
		upper = v2;
		lower = v1;
	}
	int sum = 0;
	for (int i = lower; i <= upper; ++i)
	{
		sum = sum + i;
	}
	std::cout << "Sum between" << lower
		<< " and " << upper
		<< " is " << sum
		<< std::endl;
	return 0;
}
