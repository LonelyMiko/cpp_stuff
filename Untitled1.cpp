#include <iostream>

main(int argc, char* argv[])
{
    if(argc < 2)
        {
            std::string t_link;
            std::string t_name;
            std::cout << "Enter name: ";
            std::getline(std::cin, t_name);
            std::cout << "Enter link: ";
            std::getline(std::cin, t_link);
            std::cout << "[" << t_name << "]" << "(" << t_link << ")";
        }
    else if (argc == 3)
        {
             std::cout << "[" << argv[1] << "]" << "(" << argv[2] << ")";
        }
}
