#include "Cure.hpp"

Cure::Cure ( void )
{
    this->type = "cure";
    std::cout << "Cure : " << this->type << " Constructor is Called ." << std::endl;
}

Cure::Cure(const Cure &_Cure)
{
    *this = _Cure;
    std::cout << "Cure : " << this->type << " Copy Constructor is Called ." << std::endl;
}

Cure &Cure::operator = (const Cure &_Cure)
{
    if (this != &_Cure)
        this->type = _Cure.type;
    std::cout << "Cure : " << this->type << " assignment operator is Called." << std::endl;
    return ( *this );
}

AMateria*   Cure::clone ( void ) const
{
    std::cout << "Cure     is    Clone ." << std::endl;
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure ( void )
{
    std::cout << "Cure : " << this->type << " Destructor is Called ." << std::endl;
}