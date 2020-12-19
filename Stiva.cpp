#include <iostream>
#include <bits/stdc++.h>

class Stiva
{
private:
    std::vector<int> m_arr;
public:
    Stiva(int size)
    {
        for (int i = 0; i < size; ++i)
            {
                m_arr.push_back(i+1);
            }
    }
    void getArr()
    {
        for (std::vector<int>::iterator it = m_arr.begin(); it != m_arr.end(); ++it)
            {
                std::cout << *it << " ";
            }
            std::cout << '\n';
    }
    int operator --()
    {
        int last_element = m_arr.back();
        m_arr.pop_back();
        return last_element;

    }
};

main()
{
    Stiva stiva(5);
    std::cout << "Vectorul inainte de pop: ";
    stiva.getArr();
    std::cout << "Pop: " << --stiva << std::endl;
    std::cout << "Vectorul dupa pop:  ";
    stiva.getArr();
}
