void blockquotes(std::string text)
{
    std::cout << "> " << text << std::endl;
}

void blockquotes()
{
    std::string text;
    std::cin.ignore();
    std::cout << "Enter String: ";
    std::getline(std::cin, text);
    blockquotes(text);
}

void nestedBlockquotes(std::string text, std::string nestedText)
{
    blockquotes(text);
    std::cout << ">> " << nestedText << std::endl;
}
