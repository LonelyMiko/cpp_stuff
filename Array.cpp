#include <iostream>
class IntArray
{
private:
      int* m_ptr = nullptr;
      int m_size = 0;

public:
    IntArray() = default;

    explicit IntArray(int size)
    {
        if (size != 0)
            {
                m_ptr = new int[size]{}; // All elemets in array = 00
                m_size = size;
            }
    }

    int Size() const
    {
        return m_size;
    }

    bool isEmpty() const
    {
        return (m_size == 0);
    }

    bool isValidIndex (int index) const
    {
        return (index >= 0) && (index < m_size);
    }

    ~IntArray()
    {
        delete [] m_ptr;
        m_ptr = nullptr;
    }

    int& operator [](int index)
    {
        if (!isValidIndex(index))
            {
                //throw "Error";
            }
         return m_ptr[index];

    }

    int operator [](int index) const
    {
        if (!isValidIndex(index))
            {
                //throw "Error";
            }
         return m_ptr[index];
    }
};

int main()
{
    std::cout << "Creating an empty array" << std::endl;
    IntArray a{};
    std::cout << "a.size() is " << a.Size() << std::endl;

    std::cout << "-----------------------------------------" << std::endl;

    std::cout << "Creating an array containing 10 elements" << std::endl;
    IntArray b{10};
    std::cout << "b.Size() is " <<b.Size() << std::endl;
    b[2] = 10;
    std::cout << b[2];
}
