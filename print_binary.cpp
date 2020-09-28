#include <iostream>
#include <cstdlib> // for exit()

void printBinary(int x)
{
        // Условие завершения
        if (x == 0)
            return;

	// Рекурсия к следующему биту
	printBinary(x / 2);

	// Выводим остаток (в обратном порядке)
	std::cout << x % 2;
}

int main()
{
	int number;
	std::cout << "Enter an integer: ";
	std::cin >> number;

	printBinary(number);
}
