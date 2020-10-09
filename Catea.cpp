#include <iostream>
#include <string>

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

Base *bases[] = {&base, &child_1, &child_2, &child_3, &child_4}; // Tablou de pointer catre toate classurile

std::string randomValues[5];

short count = sizeof(bases) / sizeof(bases[0]); // calculam cate elemente are tabloul *bases


for (int i = 0; i < count ; i++) 
{
    std::cout << bases[i]->print() << std::endl;
}

for (int i = 0; i < 5; i++) 
 {
    int randomNumber = rand() % 5; // randomNumber primeste la fiecare iteratie o cifra < 5
    randomValues[i] = bases[randomNumber]->print(); 
 }
 
 std::cout << "\n ---- Printarea Valorilor Random ----" << std::endl;
 for (int i = 0; i < 5; i++) 
 {
    std::cout << randomValues[i] << std::endl;
 }
 
}
