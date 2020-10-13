/******************************************************************************

Lucrare de laborator Nr.3
Supraîncărcarea operatorilor. Funcţii prietene

2. Creaţi clasa Şir cu datele membre obligatorii: lungimea şirului, pointer la şir (şirul se păstrează într–un
domeniu de memorie alocată dinamic). Metode obligatorii: constructorul implicit, constructorul după
lungimea dată a şirului, constructorul după şirul dat, constructorul de copiere, curăţirea şirului, afişarea
şirului.
Supraîncărcaţi (redefiniţi) operaţiile: + (suma aritmetică), == (comparare) <= (mai mic sau egal), >= (mai
mare sau egal). Să se definească operaţiile ca operatori ai clasei iar una din ele ca funcţie prietenă.

Realizat: Coslet Mihail

*******************************************************************************/

#include <iostream>
#include <string>
#include <assert.h>		// for assert

class string
{
    private:
        unsigned short m_length = 5;
        std::string *m_str = new std::string[m_length];

    public:
	/******************************************************************************
        Setters
    *******************************************************************************/

    void setString()
    {
        for (int i = 0; i < m_length; i++)
        {
            std::cout << "Introduceti sirul " << i+1 <<": ";
            std::cin >> m_str[i];

        }
    }

    void setString(int index)
    {
            assert (index < m_length && index >= 0 && "index must be less than m_length and greater than or equal to 0");
            std::cout << "Introduceti sirul " << index+1 <<": ";
            std::cin >> m_str[index];

    }

    /******************************************************************************
        Getters
    *******************************************************************************/
    void getString(int index)
    {
            assert (index < m_length && index >= 0 && "index must be less than m_length and greater than or equal to 0");
            std::cout << "Sirul " << index+1 <<": " << m_str[index] << std::endl;
    }

    /******************************************************************************
        Methods
    *******************************************************************************/

    void print()
    {
        std::cout << "\n---- Printarea ----" << std::endl;
        for (int i = 0; i < m_length; i++)
        {
            std::cout << "sirul " << i+1 <<": " << m_str[i] << std::endl;

        }
    }

    inline int getLength()
    {
        return m_length;
    }

    friend void isEqual(string& str_1,  string& str_2)
    {
        if(str_1 == str_2)
        {
            std::cout << "\nSirurile au lungime egala" <<std::endl;
        }
        else if(str_1 >= str_2)
        {
            std::cout << "\nstr_1 >= str_2" << std::endl;
        }
        else if(str_1 <= str_2)
        {
            std::cout << "\nstr_1 <= str_2" << std::endl;
        }
    }



    /******************************************************************************
    Constructor && Destructor
    *******************************************************************************/
    //constructorul implicit
    string()
    {
        setString();
        print();
    }

    //constructor cu parametru
    //@param length(int)
    string(int length)
    {
        this->m_length = length;
        setString();
        print();
    }

    //Constructor de copiere
    string (const string & old_string)
    {
        m_length = old_string.m_length;
        for (int i = 0; i < m_length; i++)
        {
            m_str[i] = old_string.m_str[i];
        }
    }

    //deconstructor
    ~string()
    {
        delete[] m_str;
        m_str = nullptr; // If you are using a version smaller than C ++ 11, change m_str to 0
    }

    /******************************************************************************
     Operator overloading
    *******************************************************************************/

    inline bool operator ==(string& str_2)
    {
        return this->getLength() == str_2.getLength();
    }

    inline bool operator >=(string& str_2)
    {
        return this->getLength() >= str_2.getLength();
    }

    inline bool operator <=(string& str_2)
    {
        return this->getLength() <= str_2.getLength();
    }

    inline operator +(string& str_2)
    {
        return this->getLength() + str_2.getLength();
    }

};



main()
{
    string str_1;
    string str_2(2);
    string str_3 = str_2;
    isEqual(str_2,str_3);
    str_3.print();
}

