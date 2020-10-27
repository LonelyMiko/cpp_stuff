/* Sa se creeze o clasa de vazs Base si un sir de clase derivate den ea: Der1,...,DerN (4-5 clase)
Toate clasele trebuie sa contina metoda de afisare. Sa se creeze in main un tablou de pointeri catre
Base. Sa se completeze tabloul cu obiecte din diferite clase derviate si sa se afiseze obiectele tabloului

Base = "Persoana", Der = "Angajat", Der = "Student", Der = "Copil", Der = "Autor"
*/
#include <iostream>
#include <string> //std::string
#include <map> //std::map
#include <list>//std::list
#include "Person.h"
#include "Worker.h"
#include "Student.h"
#include "Author.h"
#include "Children.h"


main()
{
//Cream o list de pointer catre clasa de Baza
std::list <Person*> classList;
//Adaugam toate clasele derivate
classList.push_back(new Worker);
classList.push_back(new Student);
classList.push_back(new Author);
classList.push_back(new Children);

//Iterator, printam informatia fiecarui class
for(std::list<Person*>::iterator it=classList.begin();it!=classList.end();++it)
    {
        (*it)->print();
    }
}
