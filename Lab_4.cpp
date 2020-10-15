/*
Să se creeze clasa-șablon Tablou cu o dimensiune. Clasa trebuie să conțină constructori și o
metodă de afișare.
*/

#include <iostream>
#include <assert.h>
template <class T>
class array
{
    private:
        signed short int m_length = 5; // -32768 to 32767, 2 bytes
        T m_arr[10];

    public:

    /******************************************************************************
        Setters
    *******************************************************************************/
  void setLength ()
  {
    do
      {
	std::cout << "Introduceti lungimea tabloului: ";
	std::cin >> m_length;
	if (std::cin.fail ())
	  {
	    std::cin.clear ();
	    std::cin.ignore (32767, '\n');
	  }
      }
    while (m_length > 20 && m_length < 0);
  }

  void setLength (int length)
  {
    assert (length < 20 && length >= 0 && "length must be less than 20 and greater than or equal to 0");
    this->m_length = length;
  }

  void setElement (int index, T element)
  {
    assert (index < 20 && index >= 0 && "index must be less than 20 and greater than or equal to 0");
    m_arr[index] = element;
  }

    /******************************************************************************
        Getters
    *******************************************************************************/
    T getLength ()
  {
    return this->m_length;
  }

  T getElement (int index)
  {
    assert (index < 20 && index >= 0 && "index must be less than 20 and greater than or equal to 0");
    return this->m_arr[index];
  }

    /******************************************************************************
        Methods
    *******************************************************************************/
    void fillArray ()
  {
    for (int i = 0; i < m_length; ++i)
      {
	std::cout << "\nIntroduceti elementul " << i + 1 << " : ";
	std::cin >> m_arr[i];
      }
  }

   void print ()
  {
    std::cout << "\t\n---------------  Printarea Tabloului ---------------" << std::endl;
    for (int i = 0; i < m_length; ++i)
      {
        std::cout << "\t" << m_arr[i];
      }
  }

  /******************************************************************************
Constructor && Destructor
*******************************************************************************/

//Constructor implicit
  array ()
  {
    setLength ();
    fillArray ();
    print ();
  }

  //Constructor cu paramteru
  //@param length (int)
  array (int length)
  {
    assert (length < 20 && length >= 0 && "length must be less than 20 and greater than or equal to 0");
    this->m_length = length;

    fillArray ();
    print ();

  }

//Constructor de copiere
  array (const array & old_array)
  {
    m_length = old_array.m_length;
    for (int i = 0; i < 20; i++)
      {
	m_arr[i] = old_array.m_arr[i];
      }
  }

//Destructor
  ~array ()
  {
    std::cout << "\nDestructorul a fost apelat" << std::endl;
  }
};

main()
{
    array <int> (4);
    array <float> (4);
    array <char> (4);
    array <std::string> (5);
}
