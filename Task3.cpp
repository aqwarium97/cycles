#include <iostream>
#include <cstdlib>	// Для корректной работы компилятора return EXIT_SUCCESS;

int main()
{
	int user_num{};
	std::cout << "Enter integer number: " << std::endl;
	std::cin >> user_num;
	
	for (int multiplier = 1; multiplier <= 10; ++multiplier)
	{
		std::cout << user_num << " x " << multiplier << " = " << user_num * multiplier << std::endl;
	}

	system("pause");

	return EXIT_SUCCESS;
}