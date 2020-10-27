class Children : public Person
{
private:
    std::string m_yearBirth;

public:
    /******************************************************************************
        Setters
    *******************************************************************************/
    void setYearBirth()
    {
        std::cin.ignore();
        std::cout<<"Enter Year of Birth (please insert date in format DMY(dd/mm/yyyy)): ";
        std::getline(std::cin,this->m_yearBirth);
    }

    void setYearBirth(std::string yearBirth)
    {
        this->m_yearBirth;
    }

    /******************************************************************************
        Getters
    *******************************************************************************/
    std::string getYearBirth()
    {
        return this->m_yearBirth;
    }

    /******************************************************************************
        Methods
    *******************************************************************************/
    void feed()
    {
        std::cout << "You fed the child, you are a good parent" << std::endl;
    }

    void sleep()
    {
        std::cout << "Baby is sleeping, don't make a sound" << std::endl;
    }

    void print()
    {
        std::cout << '\n';
        Person::print();
        std::cout << "Year of Birth: " << m_yearBirth << std::endl;
        std::cout << '\n';
    }

    /******************************************************************************
        Constructor
    *******************************************************************************/
    Children()
    {
        setYearBirth();
        print();
    }

    Children(std::string yearBirth)
    {
        this->m_yearBirth = yearBirth;
        print();
    }
};
