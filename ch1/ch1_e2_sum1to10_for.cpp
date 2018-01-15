#include <iostream>

int main()
{
	int sum = 0;
	for (int val = 1; val <= 10; ++val) //要声明循环变量的类型
	{
		sum += val;	
	}
	std::cout << "Sum of 1 to 10 is " << sum << std::endl;
	return 0;
}
