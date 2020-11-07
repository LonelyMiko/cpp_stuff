#include <iostream>
#include <vector>
#include <array>
main()
{
    //vector
    std::vector numbers {0,1,2};
    numbers.push_back(-2); // numbers = {0,1,2,-2}
    numbers[0] = 3; // numbers = {3,1,2,-2}

    for (auto& i : numbers)
        {
            std::cout << i << " ";
        }
    std::cout << '\n';

    //array
    std::array <std::string, 12> months {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for (auto& month : months )
        {
            std::cout << month << ", ";
        }
    std::cout << '\n';
}
