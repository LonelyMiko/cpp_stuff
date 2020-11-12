void writeHeading(int type)
{
std::string headingContent;
std::string headingType;
std::cout <<"Enter Heading Content: ";
std::getline(std::cin,headingContent);
for (int i = 0; i < type; i++)
    {
        headingType += "#";
    }
    std::cout << headingType << " " << headingContent << std::endl;
}

void writeHeading (int type, std::string content)
{
    std::string headingType;
    for (int i = 0; i < type; i++)
    {
        headingType += "#";
    }
    std::cout << headingType << " " << content << std::endl;
}
