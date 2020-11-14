// Method used to obtain information if this list is ordered or not
// @return bool
bool isOrderedLists()
{
    std::string t_answer;
    std::cout << "Do you want to organize your items into ordered lists?" << std::endl;
    do
        {

            std::cout << "Please, type \"yes\" or \"no'\" : ";
            std::getline(std::cin, t_answer);
        }
    while(t_answer != "yes" && t_answer != "no");

    return (t_answer.compare("yes") == 0);
}

/*Method that has 2 parameters, the first parameter is the array of string,
and the second show how many item does the list have */
void writeList(std::string text[], int time)
{
    // check if list is ordered
    if (isOrderedLists())
        {
            for (int i = 0; i < time; ++i)
                {
                    std::cout << i+1 << "." << " " << text[i] << std::endl;
                }
        }

    else
        {
            for (int i = 0; i < time; ++i)
                {
                    std::cout << "-" << " " << text[i] << std::endl;
                }
        }
}

void writeList ()
{
    int time;
    std::cout << "How many items will be on the list?" << std::endl;
    std::cin >> time;
    std::string text[time];

    std::cin.ignore();
    for (int i = 0; i < time; ++i)
        {
            std::cout << "Enter String: ";
            std::getline(std::cin, text[i]);
        }
    writeList(text, time);
}

