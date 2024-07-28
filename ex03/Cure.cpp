#include "Cure.hpp"

Cure::Cure ( void )  {
    this->type = "cure";
    std::cout << "Cure : " << this->type << " Constructor is Called ." << std::endl;
}

Cure::Cure(const Cure &_Cure)   {
    *this = _Cure;    
    std::cout << "Cure : " << this->type << " Copy Constructor is Called ." << std::endl;
}

Cure &Cure::operator =(const Cure &_Cure)    {
    std::cout << "Cure : " << this->type << " assignment operator is Called." << std::endl;
    if (this != &_Cure)
        this->type = _Cure.type;
    return ( *this );
}

AMateria*   Cure::clone () const
{
    std::cout << "Cure     is    Clone ." << std::endl;
    return (new Cure());
}

Cure::~Cure ( void )  {
    std::cout << "Cure : " << this->type << " Destructor is Called ." << std::endl;
}