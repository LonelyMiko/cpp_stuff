class Author : public Person
{
private:
    int m_nrBooks;
    std::string m_signature;
    std::string m_email;
public:
    /******************************************************************************
        Setters
    *******************************************************************************/
    void setNrBooks()
    {
        do
        {
        std::cout << "Enter number of published books: ";
        std::cin >> this->m_nrBooks;
        }
        while(m_nrBooks <= 0);
    }

    void setSignature()
    {
        std::cin.ignore();
        std::cout << "Enter signature: ";
        std::getline(std::cin,this->m_signature);
    }

    void setEmail()
    {
        std::cin.ignore();
        std::cout << "Enter email: ";
        std::getline(std::cin,this->m_email);
    }



    //Setters with parameters

    void setNrBooks(int nrBooks)
    {
        this->m_nrBooks = nrBooks;
    }
    void setSignature(std::string signature)
    {
        this->m_signature = signature;
    }
    void setEmail(std::string email)
    {
        this->m_email = email;
    }

    /******************************************************************************
        Getters
    *******************************************************************************/
    int getNrBooks()
    {
        return m_nrBooks;
    }
    std::string getSignature()
    {
        return m_signature;
    }
    std::string getEmail()
    {
        return m_email;
    }

    /******************************************************************************
        Methods
    *******************************************************************************/
    void print()
    {
        Person::print(); // printam informatia precedenta
        std::cout << "Number of published books: " << m_nrBooks << std::endl;
        std::cout << "Signature: " << m_nrBooks << std::endl;
        std::cout << "Email: " << m_email << std::endl;
    }

    /******************************************************************************
        Constructor
    *******************************************************************************/

    Author()
    {
        std::cout << '\n';
        setNrBooks();
        setSignature();
        setEmail();
        print();
        std::cout << '\n';
    }

    Author(int nrBooks, std::string signature, std::string email)
    {
        this->m_nrBooks = nrBooks;
        this->m_signature = signature;
        this->m_email = email;
        print();
    }
};
