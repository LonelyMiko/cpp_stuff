#include <iostream>
#include <cstdlib> // for exit()

void printBinary(int x)
{
        // ������� ����������
        if (x == 0)
            return;

	// �������� � ���������� ����
	printBinary(x / 2);

	// ������� ������� (� �������� �������)
	std::cout << x % 2;
}

int main()
{
	int number;
	std::cout << "Enter an integer: ";
	std::cin >> number;

	printBinary(number);
}
