#include <iostream>
#include <string>
#include "headings.h"
#include "bold.h"
#include "italic.h"
#include "boldAndItalic.h"
#include "blockquotes.h"
#include "list.h"
#include "code.h"
#include "link.h"
#include "getCommand.h"


main()
{
    int command;
    std::cout << std::endl << "----------------------------" << std::endl;
    std::cout << std::endl << "      Markdown   " << std::endl;
    std::cout << std::endl << "----------------------------" << std::endl;
    std::cout << std::endl << "Type \"1\" for Headings" << std::endl;
    std::cout  << "Type \"2\" for Bold" << std::endl;
    std::cout  << "Type \"3\" for Bold And Italic" << std::endl;
    std::cout  << "Type \"4\" for Block Quotes" << std::endl;
    std::cout  << "Type \"5\" for Code" << std::endl;
    std::cout  << "Type \"6\" for Italic" << std::endl;
    std::cout  << "Type \"7\" for Link" << std::endl;
    std::cout  << "Type \"8\" for List" << std::endl;
    std::cout << std::endl << "Type \"0\" to exit" << std::endl;
    std::cout << std::endl << "Type: ";
    std::cin >> command;
    getCommand(command);


}
