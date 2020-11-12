void writeBoldAndItalic()
{
    std::string text;
    std::string boldAndItalicText;

    std::cout << "Enter string: ";
    std::getline(std::cin, text);

    //TODO: Change std::cout text
    std::cout << "Enter text to italic: ";
    std::getline(std::cin, boldAndItalicText);
    //TODO call writeBold(std::string text, std::string boldText)
    std::size_t pos = text.find(boldAndItalicText);
        if(pos)
        {
            std::string t_str = text.substr (pos, boldAndItalicText.length());
            std::string t_boldAndItalicText =  "***" + t_str + "***";
            int length = boldAndItalicText.length();
            text.replace(pos, length, t_boldAndItalicText); // index, length
            std::cout << text;
        }
}

void writeBoldAndItalic(std::string text, std::string boldAndItalicText)
{
std::size_t pos = text.find(boldAndItalicText);
if(pos)
    {
        std::string t_str = text.substr (pos, boldAndItalicText.length());
        std::string t_boldAndItalicText =  "***" + t_str + "***";
        int length = boldAndItalicText.length();
        text.replace(pos, length, t_boldAndItalicText);
        std::cout << text;
    }
}
