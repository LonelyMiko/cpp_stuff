#include <iostream>
#include <string>
#include <vector>

class Base 
{
    public:
        virtual const std::string print() { return "Figura geometrica"; }
};

class Child_1 : public Base
{
    public:
        virtual const std::string print() { return "Dreptunghi"; }
};

class Child_2 : public Base
{
    public:
        virtual const std::string print() { return "Triunghi"; }
};

class Child_3 : public Base
{
    public:
        virtual const std::string print() { return "Patrulater"; }
};

class Child_4 : public Base
{
    public:
        virtual const std::string print() { return "Romb"; }
};


int main()
{
Base base;
Child_1 child_1;
Child_2 child_2;
Child_3 child_3;
Child_4 child_4;

Base *bases[] = {&base, &child_1, &child_2, &child_3, &child_4};
std::vector<std::string> randomValues;

short count = sizeof(bases) / sizeof(bases[0]);

for (int i = 0; i < count ; i++) 
{
    std::cout << bases[i]->print() << std::endl;
}
}
