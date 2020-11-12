#include <iostream>
#include <string>
#include "headings.h"
#include "bold.h"
#include "italic.h"
#include "boldAndItalic.h"
#include "blockquotes.h"
#include <bitset>


main()
{
    //writeHeading(2, "Test");
    //writeItalic();
    //writeBoldAndItalic("Test my String", "my");
    int a = 5;
    std::bitset<8> x(a);
    std::cout <<"a= \t" << x << std::endl;
    std::cout <<"~a= \t" << (~x) << std::endl;

}
