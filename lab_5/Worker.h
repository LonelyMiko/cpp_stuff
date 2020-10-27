class Worker : public Person
{
private:
    std::string m_workExperience;
    std::string m_function;
    std::string m_characteristics;
    double m_salary;

public:
    /******************************************************************************
        Setters
    *******************************************************************************/
    void setWorkExperience()
    {
        std::cout << "Enter Work Experience: ";
        std::cin.ignore();
        std::getline(std::cin, this->m_workExperience);
    }

    void setFunction()
    {
        std::cout << "Enter Function: ";
        std::cin.ignore();
        std::getline(std::cin, this->m_function);
    }

    void setCharacteristics()
    {
        std::cin.ignore();
        std::cout << "Enter Characteristics: ";
        std::getline(std::cin, this->m_characteristics);
    }

    void setSalary()
    {
        std::cout << "Enter Salary: ";
        std::cin >> this->m_salary;
    }


    //Setters with parameters

    void setWorkExperience(std::string workExperience)
    {
        this->m_workExperience = workExperience;
    }

    void setFunction(std::string func) //cannot type function, because function is a keyword and cannot be reinitialize
    {
        this->m_function = func;
    }

    void setCharacteristics(std::string characteristics)
    {
        this->m_characteristics = characteristics;
    }

    void setSalary(double salary)
    {
        this->m_salary = salary;
    }

    /******************************************************************************
        Getters
    *******************************************************************************/
    std::string getWorkExperience()
    {
        return this->m_workExperience;
    }

     std::string getFunction()
    {
        return this->m_function;
    }

    std::string getCharacteristics()
    {
        return this->m_characteristics;
    }

    double getSalary()
    {
        return this->m_salary;
    }
    /******************************************************************************
        Methods
    *******************************************************************************/
    void print()
    {
        Person::print(); // printam informatia precedenta
        std::cout << "Work Experience: " << m_workExperience << std::endl;
        std::cout << "Function: " << m_function << std::endl;
        std::cout << "Characteristics: " << m_characteristics << std::endl;
        std::cout << "Salary: " << m_salary << std::endl;
    }

    /******************************************************************************
        Constructor
    *******************************************************************************/

    Worker()
    {
        std::cout << '\n';
        setWorkExperience();
        setFunction();
        setCharacteristics();
        setSalary();
        print();
        std::cout << '\n';
    }

    Worker(std::string workExperience, std::string func, std::string characeristics, double salary)
    {
        this->m_workExperience = workExperience;
        this->m_function = func;
        this->m_characteristics = characeristics;
        this->m_salary = salary;
    }
};
