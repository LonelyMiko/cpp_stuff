/*Method that has 2 parameters, the first parameter is the full text,
and the second is a piece of text that should be transform to bold and italic */
//@param string
//@param string
void writeBoldAndItalic(std::string text, std::string boldAndItalicText)
{
std::size_t pos = text.find(boldAndItalicText);
if(pos)
    {
        std::string t_str = text.substr (pos, boldAndItalicText.length());
        std::string t_boldAndItalicText =  "***" + t_str + "***";
        int length = boldAndItalicText.length();
        text.replace(pos, length, t_boldAndItalicText);
        std::cout << text << std::endl;
    }
}

//Method what take the full text and the piece of text from user
//Used to method with parameters
void writeBoldAndItalic()
{
    std::string text;
    std::string boldAndItalicText;

    std::cin.ignore();
    std::cout << "Enter string: ";
    std::getline(std::cin, text);


    std::cout << "Enter text to bold and intalic: ";
    std::getline(std::cin, boldAndItalicText);

    writeBold(text, boldAndItalicText);
}
