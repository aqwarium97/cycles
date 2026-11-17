#include <iostream>

int main()

{
	int user_num{};
	std::cout << "Enter integer num: " << std::endl;
	std::cin >> user_num;

	int total = 0;

	do
	{
		int last_digit = user_num % 10;
		total += last_digit;
		user_num /= 10;

	} while (user_num != 0);

	std::cout << "Sum of digits: " << total << std::endl;

	return EXIT_SUCCESS;
}