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

// ������� ������ 13 ����� ���������
main()
{
int count = 0;

std::cout << "Enter a positive number: ";
std::cin >> count;

std:: cout << factorial(count) << " ";

}
