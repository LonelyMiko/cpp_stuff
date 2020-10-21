#include <iostream>
#include <string>

class angajat
{
private:
    std::string m_nume;
    std::string m_functia;
    int m_anul_nasterii;
    double m_salariu;

public:
    /******************************************************************************
        Setters
    *******************************************************************************/

    void SetNume()
    {
        std::cout << "Sir, Madam, introduceti numele dumneavoastra: ";
        std::getline(std::cin,m_nume);
    }

    void SetNume(std::string nume)
    {
        this->m_nume = nume;
    }

    void SetFunctia()
    {
        std::cout << m_nume << " introduceti functia dumneavoastra: ";
        std::getline(std::cin,m_functia);
    }

    void SetFunctia(std::string functia)
    {
        this->m_functia = functia;
    }

    void SetAnulNasteri()
    {
        std::cout << m_nume << " introduceti anul nasteri dumneavoastra: ";
        std::cin >> m_anul_nasterii;
    }

    void SetAnulNasteri(int anul_nasteri)
    {
        this->m_anul_nasterii = anul_nasteri;
    }

    void SetSalariu()
    {
        std::cout << m_nume << " introduceti salariu dumneavoastra: ";
        std::cin >> m_salariu;
    }

    void SetSalariu(double salariu)
    {
        this->m_salariu = salariu;
    }

    /******************************************************************************
        Getters
    *******************************************************************************/

    std::string GetNume ()
    {
        return this->m_nume;
    }

    std::string GetFunctia()
    {
        return this->m_functia;
    }

    int GetAnulNasteri()
    {
        return this->m_anul_nasterii;
    }

    double GetSalariu()
    {
        return this->m_salariu;
    }

    /******************************************************************************
        Constructor
    *******************************************************************************/
     //constructor implicit
     angajat()
     {
        SetNume();
        SetFunctia();
        SetAnulNasteri();
        SetSalariu();
        print();
     }

     //constructor cu un parametru
     //@param std::string
     angajat(std::string nume)
     {
        SetNume(nume);
        SetFunctia();
        SetAnulNasteri();
        SetSalariu();
        print();
     }

     //constructor cu 2 parametri
     //@param std::string
     //@param std::string
     angajat(std::string nume, std::string functia)
     {
        SetNume(nume);
        SetFunctia(functia);
        SetAnulNasteri();
        SetSalariu();
        print();
     }

     //constructor cu 3 parametri
     //@param std::string
     //@param std::string
     //@param int
     angajat(std::string nume, std::string functia, int anul_nasteri)
     {
        SetNume(nume);
        SetFunctia(functia);
        SetAnulNasteri(anul_nasteri);
        SetSalariu();
        print();
     }

     //constructor cu 3 parametri
     //@param std::string
     //@param std::string
     //@param int
     angajat(std::string nume, std::string functia, int anul_nasteri, double salariu)
     {
        SetNume(nume);
        SetFunctia(functia);
        SetAnulNasteri(anul_nasteri);
        SetSalariu(salariu);
        print();
     }

    /******************************************************************************
        Destructor
    *******************************************************************************/

    ~angajat()
    {

    }

    /******************************************************************************
        Metodele clasei
    *******************************************************************************/

    void ModificareaSalariului()
    {
        double temp;
        std::cout << "Cu cat doriti sa modificati salariul angajatului " << m_nume <<": ";
        std::cin >> temp;
        m_salariu+=temp;
        std::cout << "Salariul angajatului " << m_nume <<": " << m_salariu << std::endl;
    }

    void SalariuMediu(angajat& X,angajat& Y)
    {
        m_salariu = (X.m_salariu + Y.m_salariu) / 2;
        std::cout << "Salariul angajatului " << m_nume <<": " << m_salariu << std::endl;
    }

    void print()
    {
        std::cout << '\n';
        std::cout << "Numele: " << m_nume << std::endl;
        std::cout << "Functia: " << m_functia << std::endl;
        std::cout << "Anul nasteri: " << m_anul_nasterii << std::endl;
        std::cout << "Salariu: " << m_salariu << std::endl;
        std::cout << '\n';
    }
};

main()
{
    angajat Petru;
    angajat Maria("Maria");
    angajat Vasea("Vasea", "Born to die");
    angajat Nina("Nina", "Born to born",1986);
    angajat meme("Bonk","POG",0,9999.99);
}
