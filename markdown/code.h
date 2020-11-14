/*Method that has 2 parameters, the first parameter is the full text,
and the second is a piece of text that should be transform to code*/
//@param string
//@param string
void code(std::string text, std::string codeText)
{
std::size_t pos = text.find(codeText);
if(pos)
    {
        std::string t_str = text.substr (pos, codeText.length());
        std::string t_boldText =  "`" + t_str + "`";
        int length = codeText.length();
        text.replace(pos, length, t_boldText);
        std::cout << text << std::endl;
    }
}

void code()
{
    std::string text;
    std::string codeText;

    std::cin.ignore();
    std::cout << "Enter string: ";
    std::getline(std::cin, text);

    std::cout << "Enter code text: ";
    std::getline(std::cin, codeText);

    code(text, codeText);

}
