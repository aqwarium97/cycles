#include <iostream>
#include <cmath>

int main()
{
	int total = 0;
	while (total >= 0)
	{
		int user_number{};
		std::cout << "Enter integer number or number '0' to continue: " << std::endl;
		std::cin >> user_number;
		
		if (user_number != 0)
		{
			total += user_number;
		}
		else
		{
			break;
		}
	}
	std::cout << "Total: " << total << std::endl;

	return EXIT_SUCCESS;
}