void link(std::string text, std::string link)
{
    std::cout << "[" << text << "]" << "(" << link << ")";
}

void link()
{
std::string t_text, t_link;

std::cin.ignore();
std::cout << "Enter Text: ";
std::getline(std::cin, t_text);

std::cout << "Enter Link: ";
std::getline(std::cin, t_link);

link(t_text, t_link);
}
