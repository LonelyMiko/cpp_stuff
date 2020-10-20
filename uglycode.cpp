#include <iostream>

class abonat
{
private:
    std::string m_nrTelefon;
    std::string m_nume;
    const std::string m_abonament[3] = {"standart", "econom", "inlesniri"};
    std::string m_currentAbonament;
    int m_nrMinute;

public:
    void setNrTelefon(std::string numar)
    {
        this->m_nrTelefon = numar;
    }

    void setNume(std::string nume)
    {
        this->m_nume = nume;
    }

    void setNrMinute(int minute)
    {
        this->m_nrMinute = minute;
    }

    void setCurrentAbonament(int index)
    {
        this->m_currentAbonament = m_abonament[index];
    }

    std::string getNrTelefon()
    {
        return m_nrTelefon;
    }

    std::string getNume()
    {
        return m_nume;
    }



    int getNrMinute()
    {
        return this->m_nrMinute;
    }

    std::string getCurrentAbonament()
    {
        return m_currentAbonament;
    }

    void print()
    {
        std::cout << "Nume: " << getNume() << std::endl;
        std::cout << "Nr de telefon: " << getNrTelefon() << std::endl;
        std::cout << "Abonament: " << getCurrentAbonament() << std::endl;
        std::cout << "Nr minute: " << getNrMinute() << std::endl;
    }


    abonat(std::string nrTelefon)
    {
        this->m_nrTelefon = nrTelefon;
        setNume("Test");
        setCurrentAbonament(0);
        setNrMinute(10);
    }

    abonat(std::string nrTelefon, std::string nume)
    {
        this->m_nrTelefon = nrTelefon;
        this->m_nume = nume;
        setCurrentAbonament(0);
        setNrMinute(10);
    }

    abonat(std::string nrTelefon, std::string nume, std::string abonament, int nrMinute)
    {
        this->m_nrTelefon = nrTelefon;
        this->m_nume = nume;
        this->m_currentAbonament = abonament;
        this->m_nrMinute = nrMinute;
    }

    abonat(const abonat &old_abonat)
    {
        this->m_nrTelefon = old_abonat.m_nrTelefon;
        this->m_nume = old_abonat.m_nume;
        this->m_currentAbonament = old_abonat.m_currentAbonament;
        this->m_nrMinute = old_abonat.m_nrMinute;
    }

};
int compar(abonat &a1, abonat &a2)

    {
        if(a1.getNrMinute() > a2.getNrMinute())
            {
                return 1;
            }

        else if (a1.getNrMinute() < a2.getNrMinute())
            {
                return -1;
            }
        return 0;
    }

main()
{
    abonat abon_1("0697854");
    abon_1.print();

    std::cout << '\n';

    abonat abon_2("0624155", "Test_2", "econom", 5);
    abon_2.print();

    std::cout << compar(abon_1, abon_2);
}
