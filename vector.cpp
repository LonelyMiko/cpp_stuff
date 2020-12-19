#include <iostream>
class Vector
{
private:
    int m_arr1[5];
    // These array are used if a constructor without parameters is called
public:
    Vector()
    {
        int t_size;
        for (int i = 0; i < 5; ++i)
            {
                std::cout << "Dati elementul " << (i+1) << ": ";
                std::cin >> m_arr1[i];
                std::cout << '\n';
            }
    }

    Vector(int arr_1[5])
    {
        for (int i = 0; i < 5; ++i)
            {
                this->m_arr1[i] = arr_1[i];
            }

    }

    void operator +(Vector& obj)
    {


        for (int i = 0; i < 5; ++i)
            {
                std::cout << this->m_arr1[i] << " + " << obj.m_arr1[i] << " = " << this->m_arr1[i] + obj.m_arr1[i] <<std::endl;
            }
    }
};

main()
{
    int test[5] = {1,2,3,4,5};
    Vector vector1;
    Vector vector2(test);
    vector1 + vector2;
}

