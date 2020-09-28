#include <iostream>

int factorial(int number)
{
    if(number > 1)
    {
        return number * factorial(number - 1);
    }
    else
    {
        return 1;
    }
}

// Выводим первые 13 чисел Фибоначчи
main()
{
int count = 0;

std::cout << "Enter a positive number: ";
std::cin >> count;

std:: cout << factorial(count) << " ";

}
