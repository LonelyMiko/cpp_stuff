//BasicOOP
#include <iostream>

class Animal
{
protected:
    //состояние класса
    std::string m_name;
    int m_paws;
    bool m_tail;
    std::string m_color;

public:
    //конструктор
    Animal() : m_paws(4)
    {
        setValue();
    }

    //констроуктор с параметрами
    //m_name(name), ... ,m_color(color) -> значение по умолчанию
    Animal(std::string name,int paws,bool tail, std::string color) : m_name(name), m_paws(paws), m_tail(tail), m_color(color)
    {

    }

    //деконструктор
    ~Animal()
    {

    }

    //поведение класса
    void setValue()
    {
        std::cout << "Enter a name for your animal: ";
        std::cin >> this ->m_name;

        std::cout << "Enter a number of paws for your animal: ";
        std::cin >> this ->m_paws;

        std::cout << "Type \"1\" if your animal have a tail or \"0\" if your animal haven't a tail: ";
        std::cin >> this ->m_tail;

        std::cout << "Enter a color for your animal: ";
        std::cin >> this ->m_color;
    }

    void move()
    {
        std::cout << this->m_name << " moved" << std::endl;;
    }

    virtual void print()
    {
        std::cout << " Name: " << this->m_name << std::endl;
        std::cout << " Paws: " << this->m_paws << std::endl;
        (this->m_tail) ? std::cout << " Tail: Yes" << std::endl : std::cout << " Tail: No" << std::endl;
        std::cout << " Color: " << this->m_color << std::endl;
         std::cout << std::endl;
    }

};

class Cat : public Animal //наследование;
{
public:
    //Полиформизм
    void print() override
    {
            std::cout << "Polymorphism is too hard !1!1!" <<std::endl;
    }

    bool operator==(Cat& _other)
    {
        return this-> m_paws == _other.m_paws && this->m_tail == _other.m_tail && this->m_color == _other.m_color;
    }

};

main()
{
    Animal dog;
    dog.print();

    Cat cat;
    cat.print();

    Cat cat_1;
    Cat cat_2;

    if (cat_1 == cat_2) //Я понял как это работает, но нужно почитать про это еще
        {
            std::cout << "cat_1 == cat_2" << std::endl;
        }

}
