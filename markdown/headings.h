void writeHeading (int type, std::string content)
{
    std::string headingType;
    for (int i = 0; i < type; i++)
    {
        headingType += "#";
    }
    std::cout << headingType << " " << content << std::endl;
}

void writeHeading()
{
std::string headingContent;
int type;

std::cout << "Enter type: ";
std::cin >> type;

std::cin.ignore();
std::cout <<"Enter Heading Content: ";
std::getline(std::cin,headingContent);

writeHeading(type, headingContent);

}
