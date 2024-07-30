#include "Ice.hpp"

Ice::Ice ( void )
{
    this->type = "ice";
    std::cout << "Ice : " << this->type << " Constructor is Called ." << std::endl;
}

Ice::Ice(const Ice &_Ice)
{
    *this = _Ice;
    std::cout << "Ice : " << this->type << " Copy Constructor is Called ." << std::endl;
}

Ice &Ice::operator =(const Ice &_Ice)
{
    if (this != &_Ice)
        this->type = _Ice.type;
    std::cout << "Ice : " << this->type << " assignment operator is Called." << std::endl;
    return ( *this );
}

AMateria*   Ice::clone ( void ) const
{
    std::cout << "Ice     is    Clone ." << std::endl;
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;;
}

Ice::~Ice ( void )
{
    std::cout << "Ice : " << this->type << " Destructor is Called ." << std::endl;
}