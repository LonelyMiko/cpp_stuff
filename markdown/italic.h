/*Method that has 2 parameters, the first parameter is the full text,
and the second is a piece of text that should be transform to italic*/
//@param string
//@param string
void writeItalic(std::string text, std::string boldText)
{
std::size_t pos = text.find(boldText);
if(pos)
    {
        std::string t_str = text.substr (pos, boldText.length());
        std::string t_boldText =  "*" + t_str + "*";
        int length = boldText.length();
        text.replace(pos, length, t_boldText);
        std::cout << text;
    }
}

void writeItalic()
{
    std::string text;
    std::string boldText;

    std::cin.ignore();
    std::cout << "Enter string: ";
    std::getline(std::cin, text);

    //TODO: Change std::cout text
    std::cout << "Enter text to italic: ";
    std::getline(std::cin, boldText);
    writeBold(text, boldText);

}

