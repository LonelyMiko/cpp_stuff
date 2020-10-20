#include <iostream>
#include <string>

class latura
{
protected:
    int lungimea,latimea;

public:
    void setLungimea(int lungimea)
    {
        this->lungimea = lungimea;
    }

    void setLatimea(int latimea)
    {
        this->latimea = latimea;
    }

    int getLungimea()
    {
        return this->lungimea;
    }

    int getLatimea()
    {
        return this->latimea;
    }

    latura()
    {
        setLungimea(8);
        setLatimea(8);
    }

};

class dreptunghi : public latura
{

public:
    int getAria()
    {
        return latimea * lungimea;
    }

    int getPerimetru()
    {
        return 2 * (latimea + lungimea);
    }
};

class paralelipiped : public dreptunghi
{
private:
    int inaltimea;

public:
    void setInaltimea(int inaltimea)
    {
        this->inaltimea = inaltimea;
    }

    int getInaltimea()
    {
        return this->inaltimea;
    }

    int getAriaBazei()
    {
        getAria(); // Aria Bazei = L*l
    }

    int getAriaLaterala()
    {
        return getPerimetru() * getInaltimea(); // Aria laterala = 2(L*l)*h
    }

    int getAriaTotala()
    {
        return getAriaLaterala() + (2 * getAriaBazei());
    }

    int getVolum()
    {
        return getAriaBazei() * getInaltimea(); // V = Aria bazei * h
    }

    int dreptunghi()
    {
        setInaltimea(8);
    }

};

class p_patrulatera : public paralelipiped
{
public:

    int getAriaBazei()
    {
        return latimea * latimea;
    }

    int getPerimetruBazei()
    {
        return 4*latimea;
    }

    p_patrulatera()
    {
        getAriaBazei();
        getPerimetruBazei();
    }
};

main()
{
    p_patrulatera patrulater;
    std::cout << patrulater.getAriaBazei();
}
