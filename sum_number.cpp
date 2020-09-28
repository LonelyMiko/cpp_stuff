#include <iostream>

int sumNumbers(int x)
{
	if (x < 10)
		return x;
	else
		return sumNumbers(x / 10) + x % 10;
}

main()
{
    int number = 0;

    std::cout << "Enter a positive number: ";
    std::cin >> number;

    std::cout << sumNumbers(number);
}
