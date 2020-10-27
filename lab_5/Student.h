//TODO De adaugat o functie care afiseaza media tuturor noatelor
class Student : public Person
{
private:
    std::string m_university;
    std::string m_faculty;
    // do not confuse with age or year of birth, this variable store year at the university
    int m_year;
    //marks will contain the name of the object and mark
    std::map<std::string, double> m_marks;

public:

    /******************************************************************************
        Setters
    *******************************************************************************/

    void setUniversity()
    {
        std::cin.ignore();
        std::cout << "Enter University: ";
        std::getline(std::cin,this->m_university);
    }

    void setFaculty()
    {
        std::cin.ignore();
        std::cout << "Enter Faculty: ";
        std::getline(std::cin,this->m_faculty);
    }

    void setMarks()
    {
        std::string key;
        double value;
        for (int i = 0; i < 2; i++)
            {
                std::cin.ignore();
                std::cout << "Enter name of the object: ";
                std::getline(std::cin,key);
                std::cout << "Enter the mark of the object: ";
                std::cin >> value;
                m_marks.insert(std::pair<std::string, double>(key,value));
            }
    }

    void setYear()
    {
       do
        {
            std::cout << "Enter Year At The University: ";
            std::cin >>this->m_year;
        }
    while(m_year <= 0 && m_year > 15);
    }

    //Setters with parameters
    void setUniversity(std::string university)
    {
        this->m_university = university;
    }

    void setFaculty(std::string faculty)
    {
        this->m_faculty = faculty;
    }

    void setYear(int year)
    {
        if(year <= 0 && year > 15)
            {
                setYear();
            }
    }

    /******************************************************************************
        Getters
    *******************************************************************************/

    std::string getUniversity()
    {
        return this->m_university;
    }

    std::string getFaculty()
    {
        return this->m_faculty;
    }

    int getYear()
    {
        return this->m_year;
    }

    void getMarks()
    {
        std::cout << '\n';
        for (std::map<std::string,double>::iterator it=m_marks.begin(); it!=m_marks.end(); ++it)
            {
                std::cout << it->first << ": " << it->second << std::endl;
            }
    }

    double getAVG()
    {
        double temp_sum = 0;
        for (std::map<std::string,double>::iterator it=m_marks.begin(); it!=m_marks.end(); ++it)
            {
                temp_sum += it->second;
            }
        return temp_sum / m_marks.size();
    }

    double getMaxMark()
    {
        double currentMax = 0;
        for(auto it = m_marks.cbegin(); it != m_marks.cend(); ++it )
            if (it ->second > currentMax)
                {
                currentMax = it->second;
                }
    return currentMax;
    }

    /******************************************************************************
        Methods
    *******************************************************************************/

   void print()
    {
        Person::print();
        std::cout << "University: " << getUniversity() << std::endl;
        std::cout << "Faculty: " << getFaculty() << std::endl;
        std::cout << "Year: " << getYear() << std::endl;
        getMarks();
        std::cout << "Avg:" << getAVG() << std::endl;
        std::cout << "Max:" << getMaxMark() << std::endl;
    }

    /******************************************************************************
        Constructor
    *******************************************************************************/

    Student()
    {
        std::cout << '\n';
        setUniversity();
        setFaculty();
        setYear();
        setMarks();
        print();
        std::cout << '\n';
    }

    Student(std::string university, std::string faculty, int year)
    {
        this->m_university = university;
        this->m_faculty = faculty;
        this->m_year = year;
        setMarks();
        print();
    }
};
