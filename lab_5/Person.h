class Person
{
protected:
    int m_age;
    double m_height;
    double m_weight;
    std::string m_nationality;
    std::string m_name;
    char m_gender; //"m" sau "f"
public:
    /******************************************************************************
        Setters
    *******************************************************************************/

    void setAge()
    {
    do
        {
            std::cout << "Enter the age: ";
            std::cin >>this->m_age;
        }
    //Check if user input is a negative number or 0 and is more than 100,
    //because seriously, how many human you meet with 100 age or more?
    while(m_age <= 0 && m_age > 100);
    }

    void setHeight()
    {
        std::cout << "Enter height: ";
        std::cin >>this->m_height;
    }

    void setWeight()
    {
        std::cout << "Enter weight: ";
        std::cin >>this->m_weight;
    }

    void setNationality ()
    {
        std::cout << "Enter nationality: ";
        std::cin >> this->m_nationality;
    }
    void setGender()
    {
        do
            {
                std::cout << "Enter gender (please enter 'm' for male and 'f' for female): ";
                std::cin >>this->m_gender;
            }
        while(m_gender != 'm' && m_gender != 'f');
    }

    void setName()
    {
        std::cout << "Enter Name: ";
        std::cin.ignore();
        std::getline(std::cin,m_name);
    }

    void setAge(int age)
    {
        if(age <= 0 && age > 100)
        {
                setAge();
        }
    }
    void setHeight(double height)
    {
        this->m_height = height;
    }

    void setWeight(double weight)
    {
        this->m_weight = weight;
    }

    void setGender(char gender)
    {
        if (m_gender != 'm' && m_gender != 'f')
            {
                setGender();
            }
    }

    void setNationality (std::string nationality)
    {
        this->m_nationality = nationality;
    }

    void setName(std::string name)
    {
        this->m_name = name;
    }

    /******************************************************************************
        Getters
    *******************************************************************************/

    int getAge()
    {
        return this->m_age;
    }

    double getHeight()
    {
        return this->m_height;
    }

    double getWeight()
    {
        return this->m_weight;
    }

    char getGender()
    {
        return this->m_gender;
    }

    std::string  getNationality()
    {
        return this->m_nationality;
    }

    std::string getName()
    {
        return this->m_name;
    }
    /******************************************************************************
        Methods
    *******************************************************************************/
    virtual void print()
    {
        std::cout <<'\n';
        std::cout << "Name: " << m_name << std::endl;
        std::cout << "Age: " << m_age << std::endl;
        std::cout << "Gender: " << m_gender << std::endl;
        std::cout << "Nationality: " << m_nationality << std::endl;
        std::cout << "Height: " << m_height << std::endl;
        std::cout << "Weight: " << m_weight << std::endl;
        std::cout <<'\n';
    }

    /******************************************************************************
        Constructor
    *******************************************************************************/
    //constructor
    Person()
    {
        std::cout << '\n';
        setName();
        setAge();
        setHeight();
        setWeight();
        setNationality();
        setGender();
        std::cout << '\n';
    }
    //constructor cu parametri
    Person(std::string name, int age, double height, double weight,std::string nationality, char gender)
    {
        this->m_name = name;
        this->m_age = age;
        this->m_height = height;
        this->m_weight = weight;
        this->m_nationality = nationality;
        this->m_gender = gender;
    }
};
