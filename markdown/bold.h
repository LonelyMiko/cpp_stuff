void writeBold()
{
    std::string text;
    std::string boldText;

    std::cout << "Enter string: ";
    std::getline(std::cin, text);

    //TODO: Change std::cout text
    std::cout << "Enter text to bold: ";
    std::getline(std::cin, boldText);
    //TODO call writeBold(std::string text, std::string boldText)
    std::size_t pos = text.find(boldText);
        if(pos)
        {
            std::string t_str = text.substr (pos, boldText.length());
            std::string t_boldText =  "**" + t_str + "**";
            int length = boldText.length();
            text.replace(pos, length, t_boldText); // index, length
            std::cout << text;
        }
}

void writeBold(std::string text, std::string boldText)
{
std::size_t pos = text.find(boldText);
if(pos)
    {
        std::string t_str = text.substr (pos, boldText.length());
        std::string t_boldText =  "**" + t_str + "**";
        int length = boldText.length();
        text.replace(pos, length, t_boldText); // index, length
        std::cout << text;
    }
}
