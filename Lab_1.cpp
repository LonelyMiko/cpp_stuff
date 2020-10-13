/******************************************************************************
Lucrare de laborator Nr.1
Clase. Constructor. Destructor. Date şi funcţii membre.

Clasa „Tablou de întregi” (tablou static).

(Coslet Mihai)
*******************************************************************************/

#include <iostream>
#include <assert.h>		// for assert
class array
{
private:
  int m_arr[20];
  unsigned short m_length;

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

  void setElement (int index, int element)
  {
    assert (index < 20 && index >= 0 && "index must be less than 20 and greater than or equal to 0");
    m_arr[index] = element;
  }

	/******************************************************************************

        Getters

    *******************************************************************************/

  int getLength ()
  {
    return this->m_length;
  }

  int getElement (int index)
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

  void sortArray ()
  {
    int temp = 0;
    //sorting - ASCENDING ORDER
    for (int i = 0; i < m_length; ++i)
      {
	for (int j = i + 1; j < m_length; ++j)
	  {
	    if (m_arr[i] > m_arr[j])
	      {
		temp = m_arr[i];
		m_arr[i] = m_arr[j];
		m_arr[j] = temp;
	      }
	  }
      }
  }

  void print ()
  {
    std::
      cout << "\t\n---------------  Printarea Tabloului ---------------" <<
      std::endl;
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
    sortArray ();
    print ();
  }

  //Constructor cu paramteru
  //@param length (int)
  array (int length)
  {
    assert (length < 20 && length >= 0 && "length must be less than 20 and greater than or equal to 0");
    this->m_length = length;

    fillArray ();
    sortArray ();
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



main ()
{
  array arr (5);
  array arr_2 = arr;
  arr_2.print ();


}
