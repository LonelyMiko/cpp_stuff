#include <iostream>
#define _USE_MATH_DEFINES // DO NOT DELETE, if you don't want to get errors
#include <math.h>
class punct {
protected:
    int m_inaltime;

     //getter
    int getInaltime()
    {
        return this -> m_inaltime;
    }

    //setter
    int setInaltime()
    {
        std::cout << "\nIntrodu inaltimea vasului: ";
        std::cin >> this->m_inaltime;
    }

    //print
    virtual void print()
    {
        std::cout << "Class: punct" <<" Inaltimea: " << m_inaltime << std::endl;
        std::cout <<"\n";
    }

    //constructor implicit
    punct()
    {
        setInaltime();
        print();
    }


};

class placaRotunda : public punct
{
protected:
    int m_raza;
    int m_diametru;

    int getRaza()
    {
        return this -> m_raza;
    }

    int getDiametru()
    {
        return this -> m_diametru;
    }

    int setRaza()
    {
        std::cout << "Introdu raza vasului: ";
        std::cin >> this->m_raza;
    }

    int setDiametru()
    {
        std::cout << "Introdu diametrul vasului: ";
        std::cin >> this->m_diametru;
    }

    void print()
    {
        std::cout << "\nClass: placaRotunda" <<" Raza: " << m_raza << " Diametru: " << m_diametru << std::endl;

    }

    //constructor implicit
    placaRotunda()
    {
        setRaza();
        setDiametru();
        print();
    }
};

class vasCilindric : public placaRotunda
{
public:

    //metode
    int getVolum()
    {
        return M_PI*(pow(m_raza,2)*m_inaltime); //pi*r^2*h
    }

    int getAriaBazei()
    {
        return M_PI*pow(m_raza,2);
    }

    int getAriaLaterala()
    {
        return 2*M_PI*m_raza*m_inaltime;
    }

    int getAria()
    {
        return 2*M_PI*m_raza*(m_raza+m_inaltime);
    }

//print
    void print()
    {
        std::cout << "\n---- Printarea ----" << std::endl;
        std::cout << "Volumul: " << getVolum() << std::endl;
        std::cout << "Aria: " << getAria() << std::endl;
        std::cout << "Aria Bazei: " << getAriaBazei() << std::endl;
        std::cout << "Aria Laterala: " << getAriaLaterala() << std::endl;
    }

 //operator overloading
bool operator ==(vasCilindric& Vas_2)
{
    return this->getVolum() == Vas_2.getVolum();
}

bool operator >(vasCilindric& Vas_2)
{
    return this->getVolum() > Vas_2.getVolum();
}

bool operator < (vasCilindric& Vas_2)
{
    return this->getVolum() < Vas_2.getVolum();
}

    //constructor implicit
    vasCilindric()
    {
       print();
    }
    vasCilindric(int inaltime, int raza, int diametru)
    {
        m_inaltime = inaltime;
        m_raza = raza;
        m_diametru = diametru;
        print();
    }
};

main()
{
    vasCilindric vasCilindric_1;
    vasCilindric vasCilindric_2(2,3,4);
    if(vasCilindric_1 == vasCilindric_2)
        {
            std::cout << "\nVasurile au volumul egal" <<std::endl;
        }
    if(vasCilindric_1 > vasCilindric_2)
        {
            std::cout << "\nvas_1 > vas_2" << std::endl;
        }
    else if(vasCilindric_1 < vasCilindric_2)
        {
            std::cout << "\nvas_1 < vas_2" << std::endl;
        }
}
